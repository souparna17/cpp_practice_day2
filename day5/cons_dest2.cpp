#include<iostream>
using namespace std;
class test
{
	private:
	static int cnt1;
	static int cnt2;
	public:
		static int getcnt1()
		{
			return cnt1;
		}
		static int getcnt2()
		{
			return cnt2;
		}
		test()
		{
			cnt1++;
			cout<<this<<endl;
			cout<<"constructor is called"<<endl;
		}
		~test()
		{
			
			cout<<"destructor is called"<<++cnt2<<endl;
			cout<<this<<endl;
		}
		
};
int test::cnt1=0;
int test::cnt2=0;
int main()
{
	test t;
	cout<<&t<<endl;
	test t1;
	cout<<&t1<<endl;
	cout<<"no of constructor called"<<test::getcnt1()<<endl;
	cout<<"no of destructor called"<<test::getcnt2()<<endl;
}
