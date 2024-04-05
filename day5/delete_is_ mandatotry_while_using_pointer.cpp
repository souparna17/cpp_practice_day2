#include<iostream>
using namespace std;
#include<string.h>
class String
{
	char* s;
	int size;
	public:
		String(char*c)
		{
		  size=strlen(c);
		  s=new char[size+1];
		  strcpy(s,c);	
		  cout<<s;
		}
		~String()
		{
			cout<<"dest called";
			delete[] s;
			cout<<s;
			
		} 
};
int main()
{
	String str("hello world");
	
}
