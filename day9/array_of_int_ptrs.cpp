#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int*ptr[5];
	cout<<"enter elements"<<endl;
	for(int i=0;i<5;i++)
	cin>>a[i];
	for(int i=0;i<5;i++)
	ptr[i]=&a[i];
	cout<<"memory of int array is"<<endl;
	for(int i=0;i<5;i++)
	cout<<'\n'<<ptr[i];
}
