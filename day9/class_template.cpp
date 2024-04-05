#include<iostream>
using namespace std;
template<class Q>
class Z
{
	public:
	Q num1;
	Q num2;
	void add()
	{cout<<"addition of two nos."<<num1+num2<<endl;}
	
};
int main()
{
	Z<int> d;
	d.add();
}
