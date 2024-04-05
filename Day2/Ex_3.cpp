#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:static const int cnt;
	private:static const int cnt1;
	public:
		complex()
		{
			cout<<"default is invoked\n";
			real=5;
			img=5;
	
		}
		static int getcnt()
		{
			return cnt1;
		}
};
const int complex::cnt=5;
const int complex::cnt1=10;
int main()
{
	complex c1;
	cout<<"no of obj created is   "<<complex::getcnt();
	cout<<"sizeoof obj is     "<<sizeof(c1)<<endl;
	cout<<complex::cnt;


}
