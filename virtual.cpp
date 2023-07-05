#include<iostream>
using namespace std;
class student
{
	public:
		int roll_no;
		char name[20];
		void getdata()
		{
			cout<<"Enter the roll no of student : ";
			cin>>roll_no;
			cout<<"Enter the name of student  : ";
			cin>>name;
		}
		void show()
		{
			cout<<"\nName : "<<name;
			cout<<"\nRoll : "<<roll_no;
		}
};
class test : public virtual student
{
	public:
		int m1,m2;
		void getmark()
		{
			cout<<"Enter the marks of both subject : ";
			cin>>m1>>m2;
		}
		void show1()
		{
			cout<<"\nM2 : "<<m1;
			cout<<"\nM2 : "<<m2;
		}
};
class sport : public virtual student
{
	public:
		int sp_mark;
		void getdata2()
		{
			cout<<"Enter the marks : ";
			cin>>sp_mark;
		}
		void show2()
		{
			cout<<"\nM3 : "<<sp_mark;
		}
};
class result : public test,public sport
{
	public:
		void result_st()
		{
			cout<<"\nTotal persentage : "<<(m1+m2+sp_mark)/3;
		}
};
int main()
{
	result s;
	s.getdata();
	s.getdata2();
	s.getmark();
	s.show();
	s.show1();
	s.show2();
	s.result_st();
}
























