#include<iostream>
using namespace std;
static int cnt=0;
class test
{
	public:
		test()
		{
			cnt++;
			cout<<"objects created"<<cnt<<endl;
		}
		~test()
		{
			cout<<"objects destroyed"<<cnt<<endl;
			cnt--;
		}
};
int main()
{
	test t,t1,t2,t3;
}
//objects are destroyed in reverse order;
