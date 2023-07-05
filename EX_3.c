#include<stdio.h>
int main()
{
	int a[10],n,i,mid,st,ed,kay,f=0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the array element : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the kay element : ");
	scanf("%d",&kay);
	st=0;
	ed=n-1;
	while(st<=ed)
	{
		mid=(st+ed)/2;
		if(a[mid]==kay)
		{
			f=1;
			printf("Element is found..!");
			break;
		}
		else if(a[mid]<kay)
		{
			st=mid+1;
		}
		else
		{
			ed=mid-1;
		}
	}
	if(f==0)
	{
		printf("Element is not found..!");
	}
}