#include<stdio.h>
void main()
{
	int i,j,n;
	char a[10];
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the array element : ");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf(" %c",a[i]);
	}
}