#include <iostream>
using namespace std;
void display(char = '*', int = 20);
int main() {
    

    cout << "No argument passed: ";
    display(); 
    
    cout << "First argument passed: ";
    display('#'); 
    
    cout << "Both arguments passed: ";
    display('$', 20); 

    return 0;
}
void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}
