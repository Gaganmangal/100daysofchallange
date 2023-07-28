#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *add_data_starting(struct node *head, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = head;
    head = temp;
    return head;
}
void add_data_center(struct node *head, int data)
{
    struct node *ptr;
    ptr = head;
    ptr = ptr->link;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = ptr->link;
    ptr->link = temp;
}
struct node *delete_first(struct node *head)
{
    if (head == NULL)
    {
        printf("no list find");
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    return head;
}
struct node *delete_last(struct node *head)
{
    if (head == NULL)
    {
        printf("no list find");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        struct node *temp1 = head;
        while (temp->link != NULL)
        {
            temp1 = temp;
            temp = temp->link;
        }
        temp1->link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}
struct node *delete_center(struct node *head)
{
    if (head == NULL)
    {
        printf("no list find");
    }
    else
    {
        struct node *temp = head;
        struct node *temp1 = head;
        temp1 = temp1->link;
        temp->link = temp1->link;
        free(temp1);
        temp1 = NULL;
    }
    return head;
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 44;
    head->link = NULL;

    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 40;
    temp->link = NULL;
    head->link = temp;

    head = add_data_starting(head, 66);
    add_data_center(head, 55);

    // head = delete_first(head);
    // head = delete_last(head);
    head = delete_center(head);

    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
