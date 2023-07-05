#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

void push()
{
if(top==MAX-1)
printf("Stack Overflow\n");
else
{
int val;
printf("Enter the value to be pushed: ");
scanf("%d",&val);
top++;
stack[top]=val;
printf("Value successfully pushed\n");
}
}

void pop()
{
if(top==-1)
printf("Stack Underflow\n");
else
{
printf("Value popped: %d\n",stack[top]);
top--;
}
}

void show()
{
if(top==-1)
printf("Stack is empty\n");
else
{
printf("Elements in stack: ");
for(int i=0;i<=top;i++)
printf("%d ",stack[i]);
printf("\n");
}
}

int main()
{
int ch;
while(1)
{
printf("1. Push\n2. Pop\n3. Show\n4. Exit\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: show();
break;
case 4: return 0;
default: printf("Invalid choice\n");
}
}
}