#include<iostream>
using namespace std;
#include<string.h>

class string1
{
	int len;
	char* ptr;
	public:
	void stringdisplay()
	{
		cout<<"length of string is"<<len<<endl;
		cout<<"string"<<ptr<<endl;
	}
	string1(char* sptr)
	{
		len=strlen(sptr);
		ptr=new char[len+1];
		strcpy(ptr,sptr);
	}
	~string1()
	{
		cout<<"destructor is called"<<endl;
		if(ptr)
		{
			cout<<"destructor is called"<<endl;
			delete[] ptr;
		}
	}
	string1(string1 &c)
	{
		this->len=c.len;
		this->ptr=new char[this->len+1];
		strcpy(this->ptr,c.ptr);
		
	}
}; 
int main()
{
	string1 c("arjun");
	c.stringdisplay();
	string1 c1(c);
	c1.stringdisplay();
}
