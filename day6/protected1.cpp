#include<iostream>
using namespace std;
class Parent
{
	protected:
		int id_protected;
};
class Child:public Parent
{
	public:
		void setid(int id)
		{
			id_protected=id; // Child class is able to access the inherited protected data members of base class
		}
		void displayid()
		{
			cout<<"protected id is"<<id_protected<<endl;
		}
};
int main()
{
	Child c;
	c.setid(81);
	c.displayid();
	
	Parent p;
	p.id_protected=10;
	p.show();
	
}
