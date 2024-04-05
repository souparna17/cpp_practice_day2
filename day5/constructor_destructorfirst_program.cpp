#include<iostream>
using namespace std;
class test
{
	public:
		test()
		{
			cout<<"constructor is executed"<<endl;
		}
		~test()
		{
			cout<<"destructor is executed"<<endl;
		}
};
int main()
{
	test t,t1,t2,t3;
}
