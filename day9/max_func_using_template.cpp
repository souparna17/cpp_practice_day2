#include<iostream>
using namespace std;
template<class A,class B>
A mymax(A x,B y)
{
	return (x>y)?x:y;
}
int main()
{
	cout<<mymax(3,'a')<<endl;
	cout<<mymax(12.3,13.5)<<endl;
}
