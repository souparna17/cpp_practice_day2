#include<iostream>
using namespace std;
char reverseString(string& str)
{
	int len = str.length();
	int n = len -1 ;
	int i = 0;
	while(i<=n){
		swap (str[i],str[n]);
		n=n-1;
		i = i+1;
		
//		if(i == '\0')
//		return (i+1);
	}
}
int main()
{
	string str = "what we have done";
	reverseString(str);
	cout<<str;
	return 0;
}
