#include<stdio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
void insert()
{
int val;
printf("Enter the value to be inserted: ");
scanf("%d",&val);
if((front==0 && rear==MAX-1)||(front==rear+1))
printf("Queue Overflow\n");
else
{
if(front==-1)
front=0;
if(rear==MAX-1)
rear=0;
else
rear++;
queue[rear]=val;
}
}
void show()
{
int i;
if(front==-1)
printf("Queue Underflow\n");
else if(front>rear)
{
for(i=front;i<MAX;i++)
printf("%d ",queue[i]);
for(i=0;i<=rear;i++)
printf("%d ",queue[i]);
printf("\n");
}
else
{
for(i=front;i<=rear;i++)
printf("%d ",queue[i]);
printf("\n");
}
}
void delete()
{
if(front==-1)
printf("Queue Underflow\n");
else
{
printf("%d is deleted\n",queue[front]);
if(front==rear)
front=rear=-1;
else if(front==MAX-1)
front=0;
else
front++;
}
}
int main()
{
int ch;
while(1)
{
printf("Enter your choice\n1.Insert\n2.Delete\n3.Show\n4.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: insert();
break;
case 2: delete();
break;
case 3: show();
break;
case 4: return 0;
default: printf("Invalid Choice\n");
}
}
}