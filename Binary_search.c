#include<stdio.h>
int main()
{
	int a[10],st,ed,mid,n,kay,i,f=0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the kay element  : ");
	scanf("%d",&kay);
	st=0;
	ed=n-1;
	while(st<=ed)
	{
		mid=(st+ed)/2;
		if(kay==a[mid])
		{
			f=1;
			break;
		}
		else if(kay>a[mid])
		{
			st=mid+1;
		}
		else
		{
			ed=mid-1;
		}
	}
	if(f==1)
	{
		printf("Element is found !!! ");	
	}
	else
	{
		printf("Element is not found !!! ");
	}
}