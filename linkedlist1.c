#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void printLinkList(struct node *ptr)
{
	while(ptr != NULL)
	{
			printf("Element  :%d\n",ptr->data);
			ptr=ptr->next;
	}		
}
int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	
	head = (struct node*) malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	head->data = 10;
	head->next = second;
	
	head->data = 12;
	head->next = third;
	
	head->data = 11;
	head->next = NULL;
	
	printLinkList(head);
}