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
class pubderv:public base
{
	public:
		int getprot()
		{
			return prot;
		}
};
int main()
{
	pubderv obj1;
	cout<<"pvt data"<<obj1.getPVT()<<endl;
	cout<<"prot data"<<obj1.getprot()<<endl;
	cout<<"public data"<<obj1.pub<<endl;
}
