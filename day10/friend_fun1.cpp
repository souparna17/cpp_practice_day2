#include<iostream>
using namespace std;
#include<string>
class Demo
{
	private:
		int private_var;
	protected:
		int protected_var;
	public:
		Demo(){
			private_var = 40;
			protected_var = 30;
		}
		friend class SS;
};
class SS{
	public:
	void display (Demo& p)
	{
	
	cout<<"the value of private var is "<<p.private_var<<endl;
	cout<<"the value of public var is "<<p.protected_var<<endl;
    }
};
int main()
{
	Demo g;
	SS fri;
	fri.display(g);
	return 0;
}
