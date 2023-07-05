#include<stdio.h>
int main()
{
	int a[10],mid,st,ed,key,i,n,f;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}	
	printf("Enter the key element : ");
	scanf("%d",&key);
	st=0;
	ed=n-1;
	while(st<=ed)
	{
		mid=(st+ed)/2;
		if(key==a[mid])
		{
			f=1;
			printf("Element is found at %d",mid+1);
			break;			
		}		
		else if(key<a[mid])
		{
			ed=mid-1;
		}
		else
		{
			st=mid+1;
		}
	}
	if(f==0)
	{
		printf("Element is not found...!");
	}
}