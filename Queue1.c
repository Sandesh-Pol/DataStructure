#include<stdio.h>
#include<stdlib.h>
#define max 10
int a[max],re=-1,fr=-1;
int push(int x)
{
	if(re==max-1)
	{
		printf("\nQueue is full..!");
	}
	else
	{
		if(fr==-1)
		{
			fr=0;
		}
		re++;
		a[re]=x;
	}
	return 0;
}
void pop()
{
	if(fr==-1||fr>re)
	{
		printf("\nQueue is empty..!");
	}
	else
	{
		printf("Deleted element : %d\n",a[fr]);
		fr++;
	}
}
void show()
{
	if(fr==-1||fr>re)
	{
		printf("\nQueue is empty..!");
	}
	else
	{
		printf("\nElements in queue");
		printf("\n------------------------------------\n");
		for(int i=fr;i<=re;i++)
		{
			printf(" %d",a[i]);
		}
		printf("\n------------------------------------\n");
		
	}
}
void main()
{
	push(10);
	push(11);
	push(13);
	push(14);
	push(15);
	push(16);
	push(17);
	push(18);
	push(19);
	push(20);
	show();
	pop();
	pop();
	pop();
	pop();
	pop();
	show();
}














