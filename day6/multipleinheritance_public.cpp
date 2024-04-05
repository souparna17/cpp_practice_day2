#include<iostream>
using namespace std;
class A
{
	int c;
	public:
		int a;
	protected:
	  	int b;
	public:
		void display()
		{
			cout<<"disp of a"<<endl;
		}	  	
};
class B:public A
{
	public:
		void show()
		{
			display();
			cout<<a<<endl;
			cout<<b<<endl;
		}
};
class C:public B
{
	public:
		void show()
		{
			cout<<a<<b<<endl;
		}
};
int main()
{
B bobj;
bobj.show();
bobj.display();
}

