#include<iostream>
using namespace std;
class shape
{
	public:
	shape();
};
shape::shape()
{
	cout<<"shape constr"<<endl;
}
class circle:public shape
{
	int rad
	public:
	circle();
	public:
	double area(int r);
	display();
};
circle::area(r)
{
	double area;
	area=3.14*r*r;
	return area;
}
circle::
