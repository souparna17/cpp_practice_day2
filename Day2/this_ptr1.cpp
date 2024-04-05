#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		void show()
		{
			a=30;
			b=40;
			cout<<"obj add\t"<<this<<endl;
			cout<<"a" <<this->a<<endl;
			cout<<"b"<<this->b<<endl;
}
};
int main()
{
	test t;
	cout<<&t<<endl;
	t.show();
}

