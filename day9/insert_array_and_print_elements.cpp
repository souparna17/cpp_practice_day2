#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"enter 5 elements"<<endl;
	for(int i=0;i<5;i++)
	cin>>*(a+i);
	cout<<"print elements"<<endl;
	for(int i=0;i<5;i++)
	cout<<*(a+i)<<endl;
	
	
}
