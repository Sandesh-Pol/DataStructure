#include<stdio.h>
#include<stdlib.h>
#define max 10
int fr=-1,re=-1,a[max];
int insert(int x)
{
	if(re>=max-1)
	printf("Queue is full\n");
	else
	{
		if(fr==-1)
		{
			fr=0;
		}
		re++;
		a[re]=x;
	}
}
int delete()
{
	int x;
	if(fr=-1||fr>re)
	{
		printf("Queue if full\n");
	}
	else
	{
		printf("%d is deleted\n",a[re]);
		fr++;
	}
}
int show()
{
	if(fr=-1||fr>re)
	{
		printf("Queue if full\n");
	}
	else
	{
		for(int i=fr;i<=re;i++)
		{
			printf("%d ",a[i]);
		}
	}
}