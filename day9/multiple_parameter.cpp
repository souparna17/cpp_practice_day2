#include<iostream>
using namespace std;
template<class A,class B>
void fun(A * x ,B y)
{
	cout<<"the name is "<<x<<endl;
	cout<<"the salary is "<<y<<endl;
}
int main()
{ int a;
    fun(&a,25);
	fun("sourabh",10000000);
}

