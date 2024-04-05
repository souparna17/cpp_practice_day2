

#include <bits/stdC++.h> 
using namespace std; 

int main() 
{ 
	complex<double> realpart(20.3, 4.9); 

	cout << "Complex Number = "
		<< realpart << endl; 


	cout << "Real part of the complex number is ="
		<< real(realpart) << endl; 

	return 0; 
} 

