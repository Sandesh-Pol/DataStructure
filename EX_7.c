#include<stdio.h>
#include<stdlib.h>
void pop();
void push();
void show();
int max = 10;
int top=-1;
int main()
{
	int ch;
	while(1)
	{
		printf("\nWhich opration you want to perform : ");
		printf("\n1.PUSH\n2.POP\n3.SHOW\n");
		printf("Enter the choice : ");
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
			default : 
				printf("\nWrong choice ..!");
		}
	}
	return 0;
}
void push()
{
	int a[max],x;
	if(top==max-1)
	{
		printf("\nStack is full ...!");
	}
	else
	{
		printf("Enter the element : ");
		scanf("%d",&x);
		top=top+1;
		a[top]=x;
	}
}
void pop()
{
	int a[max];
	if(top==-1)
	{
		printf("\nStack is empty..!");
	}
	else
	{
		printf("\nElement is poped %d",a[top]);
		top=top-1;
	}
}
void show()
{
	int i,a[10];
	if(top==-1)
	{
		printf("\nStack is empty..!");
	}
	else
	{
		printf("\nElement present in stack\n");
		for(i=top;i>=0;i--)
		printf("%d\t",a[top]);
	}
}