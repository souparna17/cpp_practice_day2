#include<iostream>
using namespace std;
static int cnt=0;
class test
{
	public:
		test()
		{
			cout<<this<<endl;
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
	test t;
	cout<<&t<<endl;
	test t1;
	cout<<&t1<<endl;
	test t2;
	cout<<&t2<<endl;
}
