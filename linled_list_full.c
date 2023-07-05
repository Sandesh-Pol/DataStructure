#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head;

void insert_st();
void insert_pos();
void insert_end();
void delete_st();
void delete_pos();
void delete_end();
void display();

void main()
{
	int ch = 0;
	while(ch!=9)
	{
		printf("chose the option from following\n");
		printf("1. Insert at begining\n2. Insert at end\n3. Insert at any random pos\n4. Delete at begining\n5. Delete at end\n6. Delete at any specified pos\n7. Display\n8. Exit");	printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					insert_st();
					break;	
			case 2:
					insert_end();
					break;	
			case 3:
					insert_pos();
					break;	
			case 4:
					delete_st();
					break;	
			case 5:
					delete_st();
					break;	
			case 6:
					delete_st();
					break;		
			case 7:
					display();
					break;
			case 8:
					exit(0);
					break;	
			default:
					printf("Wrong choice...!"); 
						
		}
	}
}
//void insert_st();
void insert_st()
{
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nOverflow...!");
	}
	else
	{
		printf("Enter value to be insearted\n");
		scanf("%d",&item);
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		printf("\nNode is insearted");
	}
}
//void insert_end();
void insert_end()
{
	struct node *ptr,*temp;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Overflow...!");
	}
	else
	{
		printf("Enter the node\n");
		scanf("%d",&item);
		ptr->data=item;
		if(head==NULL)
		{
			ptr->next=NULL;
			head=ptr;
			printf("\nNode is insearted...\n");
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=NULL;
			printf("Node is insearten...!\n");
		}
	}
}
void insert_pos()
{
	int i,loc,item;
	struct node *ptr,*temp;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nOverflow...!\n");
	}
	else
	{
		printf("Enter the element to be insearted\n");
		scanf("%d",&item);
		ptr->data=item;
		printf("Enter the location after which you want to insert\n");
		scanf("%d",&loc);
		temp=head;
		for(i=0;i<loc;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("Can not insert..!\n");
				return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;
		printf("Node insearted\n");
	}
}
void delete_st()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("List is empty \n");
	}
	else
	{
		ptr=head;
		head=ptr->next;
		free(ptr);
		printf("\nNode deleted from begining...\n");
	}
}
void delete_end()
{
	struct node *ptr,*ptr1;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
		printf("One node is deleted..!\n");
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		ptr1->next=NULL;
		free(ptr);
		printf("\nDelete node from linked list..!\n");
	}
}
void delete_pos()
{
	struct node *ptr,*ptr1;
	int loc,i;
	printf("\n Enter the location of the node after which you want to preform \n");
	scanf("%d",&loc);
	ptr=head;
	for(i=0;i<loc;i++)
	{
		ptr1=ptr;
		ptr=ptr->next;
		if(ptr==NULL)
		{
			printf("Can not delete\n");
			return;
		}
	}
	ptr1->next=ptr->next;
	free(ptr);
	printf("\nDelete Node %d.\n",loc+1);
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("List is Empty..!\n");
	}
	else
	{
		printf("\nDisplay list\n---\n");
		while(ptr!=NULL)
		{
			printf(" %d",ptr->data);
			ptr=ptr->next;
		}
		printf("\n-----\n");
	}
}