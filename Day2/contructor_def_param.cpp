#include<iostream>
using namespace std;
class MyDate
{
	int dd,mm,yy;
	public:
		MyDate();
		void display();
		MyDate(int,int,int);
	
};
void MyDate::display()
{
	cout<<"the date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
MyDate::MyDate()
{
	cout<<"the deafault date is mydate()"<<endl;
	dd = 13;
	mm = 2;
	yy = 24;
}
MyDate::MyDate(int d,int m,int y)
{
	cout<<"parameterized consructor\n"<<endl;
	dd =d;
	mm=m;
	yy=y;
}
int main()
{
	MyDate m1;
	m1.display();
	MyDate m2 (15,8,23);
	m2.display();
}
