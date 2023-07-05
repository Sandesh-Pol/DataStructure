#include<stdio.h>
int fecto(int f)
{
	if(f==1)
	{
		return f;
	}
	else
	{
		return f*fecto(f-1);
	}
}
int main()
{
	int n,fa;
	printf("Enter the number : ");
	scanf("%d",&n);
	fa=fecto(n);
	printf("%d ",fa);
	
}