#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num=123;
	int d[3];
	
	for(int i=0;i<3;i++)
	{
		d[i]=num%10;
		num=num/10;
	}
	for(int i=2;i>=0;i--)
	{
		cout<<d[i]*pow(10,i)<<"+";
	}
}
