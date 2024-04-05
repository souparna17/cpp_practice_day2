#include<iostream>
using namespace std;
template <class A, class B>
void fun(A x,B y)
{
	std::cout<<"the value of a is "<<x<<std::endl;
	std::cout<<"the value of b is "<<y<<std::endl;
}
int main()
{
	fun(10.12,12.12);
	return 0;
}

