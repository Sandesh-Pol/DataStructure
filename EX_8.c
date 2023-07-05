#include<stdio.h>
#include<stdlib.h>
#define max 5
int fr=-1,re=-1,a[max];
void insert()
{
	int item;
	if(re==max-1)
	{
		printf("\nQueue is full..!");
	}
	else
	{
		printf("Enter the element : ");
		scanf("%d",&item);
		if(fr=-1)
		{
			fr=0;
		}
		re++;
		a[re]=item;
	}
}
void deleta()
{
		if(fr==-1||fr>re)
		{
			printf("\nQueue is empty..!");
		}
		else
		{
			printf("\nDeleted element %d",a[fr]);
			fr++;
		}
}
void show()
{
	int i;
	if(fr==-1||fr>re)
	{
		printf("\nqueue is empty..!");
	}
	else
	{
		for(i=fr;i<=re;i++)
		{
			printf(" %d",a[i]);	
		}		
	}
}
void main()
{
	int ch;
	while(1)
	{
		printf("\nWhich opration you want to perform..!");
		printf("\n1.INSERT\n2.DELETE.\n3.SHOW\n4.exit");
		printf("\nEnter the choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				deleta();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(0);
				break;
			default : 
				printf("Wrong choice..!");
				break;
		}
	}
}