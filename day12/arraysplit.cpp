#include<iostream>
using namespace std;
int main()
{
    char a[20]="helloworld",b[10],c[10];
    
    for(int i=0;i<20;i++)
    {
    	if(i>0&&a[i]==111)
    	b[i]=a[i];
    	cout<<b[i];
	}
	
}
