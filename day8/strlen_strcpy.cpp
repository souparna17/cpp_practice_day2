#include<iostream>
using namespace std;
int ustrlen(char*b)
{
	int len=0;
	while(*b!='\0')
	{
		len++;
		b++;
		return len;
	}
}
void ustrcpy(char*a,char*b)
{
	while(*b!='\0')
	{
		*a=*b;
		b++;
		a++;
	}
	*b!='\0';
}
int main()
{
	int len;
	char b[10]={"pune"};
	char a[10]
	  
	  
	  
	  
	  cout<<"accept a string"<<endl;
	cin>>b>>endl;
	len=ustrlen(b);
	cout<<"len is"<<len;
	ustrcpy(a,b);
	cout<<"target string is"<<b<<endl;
}
