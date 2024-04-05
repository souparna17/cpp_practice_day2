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
		complex opearator()
		{
			complex temp;
			temp.real=this->real*(-1);
			temp.img=this->img*(-1);
			return temp;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main(){
	complex c(8,9);
	c.opearator();
	c.display();
}
