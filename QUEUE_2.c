#include<stdio.h>
#include<stdlib.h>
#define max 10
int fr=-1,re=-1,a[max];
int insert(int x)
{
	if(re==max-1)
	{
		printf("\nQueue is full..!\n");
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
}
int delete()
{
	if(fr==-1||fr>re)
	{
		printf("\nQueue is empty..!\n");
	}
	else
	{
		printf("\nDeleted element of queue is %d\n",a[fr]);
		fr++;
	}
}
int show()
{
	if(fr==-1||fr>re)
	{
		printf("\nQueue is empty..!\n");
	}
	else
	{
		printf("\nElements in queue..!\n");
		printf("\n--------------------------------\n");
		for(int i=fr;i<=re;i++)
		{
			printf(" %d",a[i]);
		}
		printf("\n--------------------------------\n");
	}
}
int main()
{
	int ch,x;
	printf("\nEnter the index of opration which you want to perform ...!\n");
	printf("\n1. INSERT\n\n2. DELETE\n\n3. SHOW\n\n4. EXIT\n");
	while(1)
	{
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the number : ");
				scanf("%d",&x);	
				insert(x);
				break;
			case 2:
				delete();
				break;	
			case 3:
				show();
				break;
			case 4:
				exit(0);
				break;
			default : 
				("\nYou entered wrong choice..!\n");
		}
	}
	return 0;
}