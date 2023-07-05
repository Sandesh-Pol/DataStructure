#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1;
int a[MAX];
int push();
int pop();
int show();
int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter the opration which you want to perform on stack : ");
		printf("\n1. PUSH\n2. POP\n3.SHOW\n4.exit\n\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Wrong choice !!!");
				break;
		}
	}
}
int push()
{
	int x;
	if(top==MAX-1)
	{
		printf("Stack is in overflow !!!");
	}
	else
	{
		printf("Enter the element which you want to enter in array  : ");
		scanf("%d",&x);
		top=top+1;
		a[top]=x;
	}
}
int pop()
{
	int x;
	if(top==-1)
	{
		printf("Stack is underflow !!!");
	}
	else
	{
		printf("Poped element %d",a[top]);
		x=a[top];
		top=top-1;
	}
	return x;
}
int show()
{
	int i;
	if(top==-1)
	{
		printf("Element not found !!! ");
	}
	else
	{
		printf("\nElements present in stack\n");
		for(i=top;i<top;i++){
			printf("%d\n",a[i]);
		}
	}
}

