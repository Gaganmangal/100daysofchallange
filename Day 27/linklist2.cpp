#include <iostream>
using namespace std;
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
    ~node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            this->next = NULL;
        }
        cout << "the data" << value << "is deleted" << endl;
    }
};
void insert_data_head(node *&head, int data);
void insert_data_tell(node *&tell, int data);
void insert_data_position(int data, int position, node *&head, node *&tell);
void delition_data_head(node *&head);

void deletion_data_position(node *&head, node *&tell, int data);
void traversering(node *&head);
int main()
{
    node *node1 = new node(190);
    node *head = node1;
    node *tell = node1;
    traversering(head);
    insert_data_head(head, 50);
    traversering(head);
    insert_data_tell(tell, 200);
    traversering(head);
    insert_data_position(250, 1, head, tell);
    traversering(head);
    insert_data_position(899, 5, head, tell);
    traversering(head);
    insert_data_position(400, 3, head, tell);
    traversering(head);
    delition_data_head(head);
    traversering(head);
    // deletion_data_position(head,tell,250);
    // traversering(head);
    return 0;
}

void insert_data_head(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void insert_data_tell(node *&tell, int data)
{
    node *temp = new node(data);
    tell->next = temp;
    tell = temp;
}

void insert_data_position(int data, int position, node *&head, node *&tell)
{
    if (position == 1)
    {
        insert_data_head(head, data);
        return;
    }
    int count = 2;
    node *temp = head;
    while (count < position)
    {
        temp = temp->next;
        count++;
    }
    if ((temp->next) == NULL)
    {
        insert_data_tell(tell, data);
        return;
    }
    node *currt = new node(data);
    currt->next = temp->next;
    temp->next = currt;
}
void traversering(node *&head)
{
    node *temp = head;
    cout << "[";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "]" << endl;
    cout << "_____________________________________________" << endl;
}
void delition_data_head(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}
void deletion_data_position(node *&head, node *&tell, int data)
{
    if (head->data == data)
    {
        delition_data_head(head);
        return;
    }
    else
    {
        node *currnt = head->next;
        node *pre = head;
        while (currnt->data == data)
        {
            currnt = currnt->next;
            pre = pre->next;
        }
        if (currnt->next == NULL)
        {
            tell = pre;
            tell->next = NULL;
            delete currnt;
        }
        pre->next = currnt->next;
        delete currnt;
    }
}