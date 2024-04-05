#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<10;i++)
	{
	int n,m,sum=0;
	cout<<"enter the number of subject"<<endl;
	cin>>n;
	cout<<"enter the number of character"<<endl;
	cin>>m;
	
	int *n_marks = new  int[n];
	char *s_name = new char [m];
	cout<<"accept marks\n";
	for(int i=0;i<n;i++)
	{
		cin>>n_marks[i];
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+n_marks[i];
	}
	cout<<"name of student";
	cin>>s_name;
	float average=sum/n;
	cout<<"average of student is"<<average<<"name is"<<s_name<<endl;
	delete []n_marks;
	delete []s_name;
}
	
		
} 
