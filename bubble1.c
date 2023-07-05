#include<stdio.h>
int main()
{
	int a[10],i,j,n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements in array : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t = a[j];
				a[j] = a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int k=0;k<n;k++)
	{
		printf("%d ",a[k]);
	}
}