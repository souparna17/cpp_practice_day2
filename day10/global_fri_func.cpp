#include<iostream>
using namespace std;
class abc
{
	int pri_var;
	protected:
		int pro_var;
		public:
			abc()
			{
				this->pri_var=25;
				this->pro_var=35;
			}
			friend void globalfriend_func(abc& obj);
};
void globalfriend_func(abc& obj)
{
	cout<<"private variable"<<obj.pri_var<<endl;
	cout<<"protected variable"<<obj.pro_var<<endl;
}

int main()
{
    abc obj;
    globalfriend_func(obj);
 
    return 0;
}

