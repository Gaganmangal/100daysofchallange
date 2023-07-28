#include <iostream>
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
using namespace std;
// singly list
void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void traversing(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
void insert_at_tail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}
void insret_at_position(node *&head, node *tail, int position, int d)
{
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }
    node *temp = head;
    int c = 1;
    while (c < position - 1)
    {
        temp = temp->next;
        c++;
    }
    if (temp->next == NULL)
    {
        insert_at_tail(tail, d);
        return;
    }
    node *nodetoinsrt = new node(d);
    nodetoinsrt->next = temp->next;
    temp->next = nodetoinsrt;
}
int main()
{
    node *node1 = new node(190);
    cout << node1->data << endl;
    cout << node1->next << endl;
    // singly list
    node *head = node1;
    node *tail = node1;
    insertathead(head, 144);
    traversing(head);
    insertathead(head, 77);
    insert_at_tail(tail, 1455);
    insert_at_tail(tail, 898);
    traversing(head);
    insret_at_position(head, tail, 3, 999999);
    traversing(head);
    // cout<<*head<<endl;
    // cout<<*tail<<endl;
    return 0;
}