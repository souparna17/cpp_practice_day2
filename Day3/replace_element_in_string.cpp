#include<iostream>
using namespace std;
int main()
{
	const int max_size=100;
	char str[max_size];
	char oldchar,newchar;
	
	cout<<"enter a string"<<endl;
	cin.getline(str,max_size);
	
	cout<<"enter old char to be replaced"<<endl;
	cin>>oldchar;
	
	cout<<"enter new char"<<endl;
	cin>>newchar;
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==oldchar)
		{
			str[i]=newchar;
		}
	}
	cout<<"string after replacement is"<<" "<<str;
}
