#include<iostream>
using namespace std;
int main(){
	int num ,num1,num2,num3,num4;
	cout<<"enter the 3 digit number : "<<endl;
	cin>>num;//123
	num1 = num % 10;//3
	num2 = num /10;//12
	num3 = num %10;
	num4 = num /10;
	cout<<num1<<endl<< num2<<endl<< num3<<endl<< num4;
}
