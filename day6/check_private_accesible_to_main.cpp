#include<iostream>
using namespace std;
class circle
{
	private:
		double rad;
		public:
		double compute_area()
		{
			return 3.14*rad*rad;
		}
};
int main()
{
	circle obj;
	obj.rad=5;
	cout<<"radius is"<<obj.rad<<endl;
	cout<<"area is"<<obj.compute_area()<<endl;
}
