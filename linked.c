#include<stdio.h>
#include<stdlib.h>
//No days off
//Retribution
struct node
{
	int data;
	struct node *link;
};

typedef struct node node;

node *add(node* head, int data)
{
	node* ptr = malloc(sizeof(node));
	ptr->data = data;
	ptr->link = NULL;

	head ->link = ptr;
	return ptr;
}

int main()
{
	node *head = malloc(sizeof(node));
	head->data = 43;
	head->link = NULL;

	node *ptr = head;
	ptr = add(ptr, 45);
	ptr = add(ptr,23);
	ptr = add(ptr,234);
	ptr = head;

	while(head != NULL)
	{
		printf("%d,", head->data);
		head = head->link;
	}
	return 0;
}

	
