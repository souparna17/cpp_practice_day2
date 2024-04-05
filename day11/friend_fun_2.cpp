#include<iostream>
using namespace std;
class Box{
	
		int length;
	public:
		Box(){
length=0;  
}    
        friend int printLength(Box);
};
int printLength(Box b)
{
	b.length += 10;
	return b.length;
}
int main()
{
	Box b;
	cout<<"the length of box is "<<printLength(b);
	return 0;
}
