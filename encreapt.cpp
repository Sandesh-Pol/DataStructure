#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	int a;
	fstream f1,f2;
	f1.open("file.txt");
	f1<<"This is secreate massage";
	f2.open("file1.txt");
	while(!f1.eof())
	{
		f1>>(a=(int)ch);
		a++;
		a++;
		a++;
		f2<<((char)a);	
	}
	f1.close();
	f2.close();
	return 0;
}