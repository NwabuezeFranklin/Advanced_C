#include<stdio.h>
#include<stdlib.h>
//Retribution
//No days Off

struct node
{
    int data;
    struct node *link;
};
void add(struct node *ptr, int m)
{
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = m;
    ptr2->link = NULL;

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = ptr2;
}

void certain(struct node *ptr, int m, int pos)
{
     struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = m;
    ptr2->link = NULL;


    while(pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    head->data = 23;
    head->link = NULL;

    add(head,45);
    add(head,90);
    add(head,35);
    add(head,55);
    certain(head, 34, 3);

    while(head != NULL)
    {
        printf("%d,", head->data);
        head = head->link;
    }

    
}
