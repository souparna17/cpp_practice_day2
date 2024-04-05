#include<iostream>
#include<string>
using namespace std;
class car
{
	string name;
	int cost;
	public:
		car(string s,int c)
		{
			name=s;
			cost=c;
		}
	friend bool operator==(const car &c,car &c1);
};
bool operator==(const car &c,car& c1 )
{
	if(c.name==c1.name&&c.cost==c1.cost)
	return true;
	return false;
}
int main()
{
	car c1("audi",50);
	car c2("bmw",20);
	if (operator==(c1,c2))
	cout<<"cars are equivalent"<<endl;
	else
	cout<<"cars are not equivalent"<<endl;
}
