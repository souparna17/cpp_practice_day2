#include <iostream>  
using namespace std;  
 void add(int=20,int=30,int=40,int=50);
int main() 
{
	add();
	add(10);
	add(10,20);
	add(10,20,30);  
    add(10,20,30,40);
    return 0;  
} 
void add(int a,int b,int c,int d)
{
	cout<<a+b+c+d<<endl;
 } 
