#include<stdio.h>
#include<stdlib.h>
//Retribution
//No days off

struct node
{
    int num;
    struct node* next;
};
typedef struct node me;

void insert(me* head, int m)
{
    me* ptr;
    me* ptr2 = malloc(sizeof(me));
    ptr2 -> num = m;
    ptr2 -> next = NULL;
    ptr = head;
    while( ptr->next!= NULL)
    {
        ptr = ptr-> next;

    }
    ptr-> next = ptr2;
}
void add_2(me *head, int m, int pos)
{
    me* ptr;
    me* ptr2 = malloc(sizeof(me));
    ptr2 -> num = m;
    ptr2 -> next = NULL;
    ptr = head;
    while(pos !=  1)
    {
        ptr = ptr-> next;
        pos--;

    }
    ptr2-> next = ptr->next;
    ptr->next = ptr2;

}

int main ()
{
    me*  head = malloc(sizeof(me));
    head -> num = 34; head ->next =NULL;
    me* ptr;
    ptr =head;
    insert(ptr, 56);
    insert(ptr,54);
    insert(ptr,45);
    add_2(ptr,32,3); // 56 32 54 45.
    while(ptr != NULL)
    {
        printf("%d,", ptr->num);
        ptr = ptr->next;
    }
}