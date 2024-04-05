#include<iostream>
#include<string.h>
using namespace std;
class student{
	int rno;
	char name[50];
	double fee;
	public:
		student(int,char[],double);
		void display();
		
};
student::student(int no ,char n[] ,double f)
{
    rno=no;
    strcpy(name,n);
    fee=f;
}   
 
void student::display()
{
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
     
int main()
{
    student s(3232,"modiji",1000);
    s.display();
    return 0;
}
