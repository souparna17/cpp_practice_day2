#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		
		complex (int r,int i)
		{
			real = r;
			img = i;
		}
		complex()
		{
		}
		complex add(complex c)
		{   
			complex temp;
			temp.real = real + c.real;
			temp.img = img + c.img;
			return temp;
		}
		void display()
		{
			cout<<"complex no.is"<<real<<"+"<<img<<"i"<<endl;
			}	
};
int main()
{
	complex c1(1,2);
	complex c2(3,4);
	complex c3 = c1.add(c2);
	c3.display();
}







