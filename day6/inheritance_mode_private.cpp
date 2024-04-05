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
		int getpvt()
		{
			return pvt;
	    }
		int getpub()
		{
			return pub;
		}	 	
};
class priderv:private base
{
	public:
		int getprot()
		{
			prot=10;
			return prot;
		}
};
int main()
{
	priderv obj1;
	cout<<obj1.getprot()<<endl;
	//cout<<obj1.getpub();
//	cout<<obj1.getpvt();
    cout<<obj1.pub;
}
