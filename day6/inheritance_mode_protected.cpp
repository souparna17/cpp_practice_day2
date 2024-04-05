#include<iostream>
using namespace std;
class base
{
	private:
		int pvt=1;
	protected:
		int prot=2;
	public:
		int pub=3;
	int getPVT()
	{
		return pvt;
	}			
};
class protderv:protected base
{
	public:
	int getprot()
	{
		return prot;
	}
	int getpub()
	{
		return pub;
	}
};
int main()
{
	protderv obj1;
//	cout<<"private data"<<obj1.getPVT();
	cout<<obj1.getprot()<<endl;
	cout<<obj1.getpub()<<endl;
	cout<<obj1.pub;
}
