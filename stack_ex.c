#include<stdio.h>
#include<stdlib.h>
#define max 10
int a[max],top=-1;
int push(int x)
{
	if(top==max-1)
	{
		printf("\nStack is overflow...!\n");
	}
	else
	{
		printf("\n%d is insearted\n",x);
		top++;
		a[top]=x;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("\nStack is underflow...!");
	}
	else
	{
		printf("\n%d is poped..!\n",a[top]);
		top--;
	}	
}
int show()
{
	if(top==-1)
	{
		printf("\nstack is underflwo...!");
	}
	else
	{
		printf("\n--------------------------------\n");
		printf("Elements in Stack :");
		printf("\n--------------------------------\n");
		for(int i=0;i<=top;i++)
		{
			printf(" %d",a[i]);
		}
		printf("\n--------------------------------\n");
	}
}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	push(8);
	show();
	pop();
	pop();
	pop();
	show();
	printf("\n--->MISSION COMPLETED<---");

}