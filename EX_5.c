#include<stdio.h>
int main()
{
	int i,j,a[10],n,t;
	printf("Enter the size of arrray : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=0;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			t=a[i];
			a[i]=a[min];
			a[min]=t;
			
		}
	}
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
}