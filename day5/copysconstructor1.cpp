#include<iostream>
using namespace std;
class cstring
{
	int len;
	char* ptr;
	public:
		cstring(const cstring& s)
		{
			this->len=len;
			this->ptr=new char[len+1];
			strcpy(this->ptr,s.ptr);
		}
};
int main()
{
	cstring s1("hello");
	cstring s2(s1);
}

