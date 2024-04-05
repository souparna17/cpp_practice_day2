#include<iostream>
using namespace std;
class sample
{
	int id;
	public:
		void init(int x){
			id=x;
		}
		void display()
		{
			cout<<"id"<<id<<endl;
		}
};
int main()
{
	sample s; 
	s.init(10);
	s.display();
	
	sample s1(s);
	
	s1.display();
}
