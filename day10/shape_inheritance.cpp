#include<iostream>
using namespace std;
class shape
{
	public:
	string name;
	int sides;
	
		/*shape(string name,int sides)
		{
			this->name=name;
			this->sides=sides;
		}*/
};
class rectangle:public shape
{
	int len;
	int br;
	public:
		rectangle(string name,int sides,int len,int br)
		{
			this->len=len;
			this->br=br;
		}
		void area()
		{
			cout<<"area of rectangle is"<<len*br<<endl;
		}
		void display()
		{	
			cout<<"shape is"<<name<<endl;
			cout<<"no.of sides is"<<sides<<endl;
			cout<<"length is"<<len<<endl;
			cout<<"breadth"<<br<<endl;
			area();
		}
};
class square:public shape
{
	int ons;
	public:
		square(string name,int sides,int ons)
		{
			this->ons=ons;
		}
		void area()
		{
			cout<<"area is : "<<ons*ons<<endl;			
		}
		void display()
		{
			cout<<"shape is"<<name<<endl;
			cout<<"no.of sides is"<<sides<<endl;
			cout<<"one side is "<<ons<<endl;
			area();
		}
		
};
class circle:public shape
{
	int rad;
	public:
	circle(string name,int sides,int rad)
		{
			this->rad=rad;
		}
		void area()
		{
			cout<<"area is : "<<3.14*rad*rad<<endl;			
		}
		void display()
		{
			cout<<"shape is"<<name<<endl;
			cout<<"no.of sides is"<<sides<<endl;
			cout<<"radius is "<<rad<<endl;
			area();
		}
};
int main()
{
	rectangle r("rectangle",4,10,20);
	square s("square",4,15);
	circle c("circle",0,20);
	r.display();
	s.display();
	c.display();
	return 0;
	
}




