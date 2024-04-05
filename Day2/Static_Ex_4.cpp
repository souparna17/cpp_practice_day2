#include <iostream>
using namespace std;

class Test
{
	static int x;
public:
	Test() { x++; }
	static int getX() {return x;}
};
int Test::x;
int main()
{
	cout << Test::getX() << " ";
}
