#include<iostream>
using namespace std;
template<class T>
T add(T &a,T &b)
{
	T res=a+b;
	return res;
}
int main()
{
	int i=2,j=3;
	float m=2.3,n=1.3;
	cout<<"add of two int is"<<add(i,j)<<endl;
	cout<<"add of two float is"<<add(m,n)<<endl;
}
