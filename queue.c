#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5

int queue[MAX_SIZE], front = -1, rear = -1;

void insert()
{
int data;
if(rear == MAX_SIZE-1)
{
printf("Queue is full.\n");
}
else
{
printf("Enter data to be inserted: ");
scanf("%d", &data);
if(front == -1)
{
front = 0;
}
rear++;
queue[rear] = data;
}
}

void delete()
{
if(front == -1 || front > rear)
{
printf("Queue is empty.\n");
}
else
{
printf("Deleted element is %d.\n", queue[front]);
front++;
}
}

void show()
{
if(front == -1 || front > rear)
{
printf("Queue is empty.\n");
}
else
{
printf("Queue elements are: ");
for(int i=front; i<=rear; i++)
{
printf("%d ", queue[i]);
}
printf("\n");
}
}

int main()
{
int choice;
while(1)
{
printf("\nEnter your choice: \n1. Insert\n2. Delete\n3. Show\n4. Exit\n");
scanf("%d", &choice);
switch(choice)
{
case 1: insert();
break;
case 2: delete();
break;
case 3: show();
break;
case 4: exit(0);
break;
default: printf("Invalid choice.\n");
}
}
return 0;
}