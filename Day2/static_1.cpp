#include<iostream>
using namespace std;
class Demo
{
	int a;
public:
	static int cnt;
public:
	Demo()
	{
		a=10;
		cnt++;
	}
	Demo(int a)
	{
		this->a=a;
		cnt++;
	}
};

int main()
{
		Demo d;
		Demo d1(10);
		cout<<"no of obj created is "<<Demo::cnt;
}


