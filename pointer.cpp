#include<iostream>
using namespace std;
int main()
{
	int *a,*b,*c,n1=0,n2=1,n3=0,ls;
	a=&n1;
	b=&n2;
	c=&n3;
	cin>>ls;

	while(*c<ls)
	{
		cout<<*c<<endl;
		*c=*a+*b;
		*a=*b;
		*b=*c;
	}
}