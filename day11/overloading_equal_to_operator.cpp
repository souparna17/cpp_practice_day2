#include<iostream>
using namespace std;
#include<string>
class Car{
	private:
		string name;
		int cost;
	public:
		Car(string n,int c){
			name = n;
			cost =c;
		}
	bool operator==(const Car &c){
		if(name==c.name && cost==c.cost)
			return true;
		return false;
	}
};
int main()
{
	Car c1 ("tata", 600000);
	Car c2 ("suzuki",700000);
	if (c1==c2)
		cout<<"cars are equivalant"<<endl;
	else
		cout<<"cars are not equivalant"<<endl;
}

