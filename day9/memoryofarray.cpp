#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	int *ptr=a;
	cout<<"memory of array is"<<&a[0]<<endl;
	cout<<"memory array is"<<ptr;
}
