#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		complex operator+(complex const &obj)
		{
			complex temp;
			temp.real=this->real + obj.real;
			temp.img=this->img +obj.img;
			return temp;
		}
		void print()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	complex c1(4,5);
	complex c2(7,8);
	complex c3;
	c3=c1+c2;
	c3.print();
}
