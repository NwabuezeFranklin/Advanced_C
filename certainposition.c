#include<stdio.h>
#include<stdlib.h>
//Retribution

struct node
{
    int data;
    struct node *link;
};

typedef struct node i;

i* add(i* head, int m)
{
    i* d = head;
    i *ptr = malloc(sizeof(i));
    ptr -> data = m;
    ptr -> link = NULL;
    while(d->link != NULL)
    {
        d = d->link;
    }
    d->link = ptr;
    //return ptr;
}

void any(i* head, int m, int pos)
{
    i* ptr = head;
    i* u = malloc(sizeof(i));
    u -> data = m;
    u -> link = NULL;

    while (pos != 1)
    {
        head = head->link;
        pos--;
    }
    u -> link = head ->link;
    head -> link = u;
    //return u;

}

int main()
{
    i* head = malloc(sizeof(i));
    head->data=34;
    head->link=NULL;

    add(head,45);
    add(head,36);
    add(head,45);

    any(head,32,4);

    i* ptr = head;

    while(ptr != NULL)
    {
        printf("%d,", ptr->data);
        ptr = ptr->link;
    }

}