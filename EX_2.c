#include<stdio.h>
int main()
{
	int i,key,f=0,n,a[10];
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the array element : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the kay element :  ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			f=1;
			printf("Element is found..!");
			break;
		}
	}
	if(f==0)
		{
			printf("Element is not found..!");
		}
	
}