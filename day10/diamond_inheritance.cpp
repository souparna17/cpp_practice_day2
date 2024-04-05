#include<iostream>
using namespace std;
class A{
	public:
		int a = 50;
	public:
		virtual void display() {
			cout<<"inside of class A"<<endl;
		}
};
class B:virtual public A
{
	public:
		void display()
		{
		   cout<<"inside of class b"<<endl;	
		}
};
class C:virtual public A
{
	public:
		void display()
		{
			cout<<"inside of class c"<<endl;	
		}
};
class D:public B,public C
{
	public:
		void display()
		{
			cout<<"inside of class d"<<endl;
		}
};
int main()
{
	D d;
	d.A::display();
}
