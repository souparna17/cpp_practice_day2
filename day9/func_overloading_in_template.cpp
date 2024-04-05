#include<iostream>
using namespace std;
template<class T>
void func(T a)
{
	cout<<"value of a is"<<a<<endl;
}
template<class X,class Y>
void func(X p,Y q)
{
	cout<<"value of p is"<<p<<endl;
	cout<<"value of q is"<<q<<endl;
}
int main()
{
	func(25);
	func(20.5,5.5);
	func('l','m');
}
