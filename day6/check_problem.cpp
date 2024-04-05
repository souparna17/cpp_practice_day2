#include<iostream>
using namespace std;
class A
{
	public:
		int id;
};
class B
{
	public:
		void show()
		{
			A obj;
			obj.id=10;
			cout<<obj.id;
		}
};
int main()
{
	B obj1;
	obj1.show();
	
}
