#include<iostream>
using namespace std;
int main()
{
	const int m=100;
	int count=0;
	char str[m];
	
	cout<<"enter a string"<<endl;
	cin.getline(str,m);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i]==32)
		str[i+1]=str[i+1]+32;
		}
		
		for(int i=0;str[i]!='\0';i++)
		{
			cout<<str[i];
		}
		
	
}
