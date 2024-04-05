#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"the constructor base class a"<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"the constructor of derived class b"<<endl;
		}
};
class C:public B
{
	public:
		C()
		{
			cout<<"the constructor of dereived class c"<<endl;
		}
};
int main()
{
	C obj;
}
