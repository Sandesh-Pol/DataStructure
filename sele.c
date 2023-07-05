#include<stdio.h>
int main()
{
	int a[10],i,j,n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements in array : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;	
			}	
		}	
	}
	for(int k=0;k<n;k++)
	{
		printf("%d ",a[k]);
	}
}