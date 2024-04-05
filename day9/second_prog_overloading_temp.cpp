#include<iostream>
using namespace std;
template<class T,class Q>
void disp(T *m,Q n)
{
	cout<<"emp name is"<<m<<endl;
	cout<<"sal is"<<n<<endl;
}
int main()
{
	int a;
	disp(&a,34);
	disp("ramesh",6025.98);
}
