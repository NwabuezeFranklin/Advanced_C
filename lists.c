#include<stdio.h>
#include<stdlib.h>
//No days off

struct node
{
    int data; 
    struct node *link;
};

typedef struct node node;


node *add(node *head, int m)
{
    node *t =malloc(sizeof(node));
    t -> data = m;
    t -> link = NULL;

    head ->link = t;
    return t;
}

int main()
{
    node *head = malloc(sizeof(node));
    head->data= 34;
    head -> link = NULL;

    node *ptr = head;
    ptr = add(ptr, 45);
    ptr = add(ptr, 34);
    ptr = add(ptr,345);
    ptr = head;
    // Adding a new node to claim the first position
    // No time for the params :)
    node *first = malloc(sizeof(node));
    first->data=23;
    first->link=head;
    head = first;
    //Adding a new node in between nodes;
    // done at first site.
    node *mid = malloc(sizeof(node));
    mid -> data = 327;
    mid -> link =  head->link->link;
    head->link->link = mid;

    node *end = malloc(sizeof(node));
    end ->data = 12;
    end ->link = NULL;
    //ptr = end;

    while( ptr != NULL)

    {
        printf("%d,", ptr->data);
        ptr = ptr->link;
    }
}