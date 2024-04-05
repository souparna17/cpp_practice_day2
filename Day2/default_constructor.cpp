#include<iostream>
using namespace std;
class student
{
	int roll;
	float fees;
	char name[50];
	public:
		student()
	{
		cout<<"enter roll no of student"<<endl;
		cin>>roll;
		cout<<"enter the fee paid by student"<<endl;
		cin>>fees;
		cout<<"enter the name of student"<<endl;
		cin>>name;
	}
	void display()
		{
			cout<<"name"<<"\t"<<name<<"roll no."<<"\t"<<roll<<"fee paid"<<"\t"<<fees<<endl;
		}
};
int main()
{
	student s;
	s.display();
	return 0;
}

