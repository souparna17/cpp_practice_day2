#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex()
		{
		}
		complex(int real,int img)
		{
			this->real=real;
			this->img=img;		
		}
		void display()
		{
			if(img>0)
			cout<<real<<"+"<<img<<"i"<<endl;
			else
			cout<<real<<"+"<<img<<endl;
		}
		complex operator+(int num)
		{
			complex temp;
			temp.real= real+num;
			temp.img= img+num;
			return temp;
		}
	friend complex operator+(int num,complex& c);
		
		
};
complex operator+(int num,complex& c)

	{
			complex temp;
			temp.real=c.real+num;
			temp.img=c.img+num;
			return temp;
		}
int main()
{
	complex c1(2,3);
	complex c2=c1+3;
	c2.display();
}
