#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	cout<<"size of a[0]"<<sizeof(a[0])<<endl;
	cout<<"size of a"<<sizeof(a)<<endl;
	int n= sizeof(a)/sizeof(a[0]);
	cout<<"length of array is"<<n<<endl;
}
