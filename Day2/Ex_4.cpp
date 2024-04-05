#include <iostream>
using namespace std;

class Test
{
     int x;
public:
	Test() {
	    x=10; }
	static int getX() 
	{
	    return this->x;
	}
	 
};
int Test::x;
int main()
{
	cout << Test::getX() << " ";
}

