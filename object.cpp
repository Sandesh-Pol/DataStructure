#include<iostream>
using namespace std;
class add
{
	public:
		int a,b;
		void get(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void put()
		{
			cout<<"value of a : "<<a;
			cout<<"\nvalue of b : "<<b;
		}
		void sum(add ob1,add ob2)
		{
			a=ob1.a+ob2.a;
			b=ob1.b+ob2.b;
		}
};
int main()
{
	add A,B,C;
	A.get(10,10);
	B.get(10,10);
	C.sum(A,B);
	C.put();
}