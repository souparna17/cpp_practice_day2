// C++ Program to swap two numbers using friend function
#include<iostream>
using namespace std;
class Swap{
	int temp, a,b;
	
	public:
		Swap(int a,int b){
			this->a=a;
			this->b=b;
		}
		friend void iet (Swap&);
		
};
void iet (Swap& s1)
{
	cout<<"valuse before swaping"<<s1.a<< " "<< s1.b<<endl;
	s1.temp = s1.a;
	s1.a=s1.b;
	s1.b= s1.temp;
	cout<<"values after swaping "<<s1.a<<" "<<s1.b<<endl;
}
int main()
{
	Swap p(5,3);
	iet(p);
	return 0;
}
