#include<iostream>
using namespace std;
class swap1
{
	int num;
	public:
		swap1(int num)
		{
			this->num=num;
		}
		friend void sw(swap1&,swap1&);
};
void sw(swap1& s1,swap1& s2)
{
	int temp;
	cout<<"before swapping"<<s1.num<<" "<<s2.num<<endl;
	temp=s1.num;
	s1.num=s2.num;
	s2.num=temp;
	cout<<"after swapping"<<s1.num<<" "<<s2.num<<endl;
}
int main()
{
	swap1 s1(5), s2(8);
	sw(s1,s2);
}
