#include<stdio.h>
int main()
{
	int min,i,n,a[10],j,t;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the array element : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);	
	}
}