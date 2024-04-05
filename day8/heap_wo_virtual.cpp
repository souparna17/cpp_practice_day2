#include<iostream>
using namespace std;
class Base {
	public:
		void show(){
			cout<<"base class"<<endl;
		}
};
class Derived : public Base{
	public:
		void show(){
			cout<<"derived class";
		}
};
int main(){
	Base* basePtr = new Base();
	Derived* derivedPtr = new Derived();
	basePtr->show();
	derivedPtr->show();
	delete basePtr;
	delete derivedPtr;
	return 0;
}
