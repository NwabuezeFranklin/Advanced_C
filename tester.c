#include<stdio.h>
#include<stdlib.h>

struct node
{
    int i;
    struct node *link;
};

void add(struct node *ptr, int i)
{
    struct node *ptr2  = malloc(sizeof(struct node));
    ptr2->i = i;
    ptr2->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = ptr2;
}

void certain(struct node *ptr, int m, int p)
{
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->i =  m;
    ptr2->link =NULL;
    p = 4;
    while(p != 1)
    {
        ptr = ptr->link;
        p--;
    }
    ptr2->link = ptr->link;
    ptr-> link = ptr2; 
}

int main()
{
    struct node *ptr;

    ptr= malloc(sizeof(struct node));
    ptr->i = 67;
    ptr->link = NULL;
    add(ptr, 34);
    add(ptr, 112);
    add(ptr, 34);
    add(ptr, 34);
    add(ptr, 34);

    certain(ptr,45, 2);
    while(ptr != NULL)
    {
        printf("%d. ", ptr->i);
        ptr= ptr->link;
    }
}