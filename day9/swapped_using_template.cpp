#include<iostream>
using namespace std;
template<class T>
T swap1(T &x,T &y)
{
	T temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a=2,b=3;
	float f=3.4,g=5.1;
	swap1(a,b);
	cout<<"value of swapped int is"<<a<<b<<endl;
	swap1(f,g);
	cout<<"value of swapped float is"<<f<<g<<endl;
}


