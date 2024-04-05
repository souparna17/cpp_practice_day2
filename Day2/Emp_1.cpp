#include <iostream>  
using namespace std;  
#include<string.h>
class Account {  
   public:  
       int accno;     
       char name[10];  
       static float rateOfInterest;   
       Account(int accno, char* name)   
        {    
             this->accno = accno;    
           strcpy(this->name,name);   
        }    
       void display()    
        {    
            cout<<accno<<"   "<<name<<"   "<<rateOfInterest<<endl;   
        }    
};  
float Account::rateOfInterest=6.6;  
int main() {  
Account a1(401, "Sourabh"); 
    Account a2(402, "souparna");  
    a1.display();    
    a2.display();    
    return 0;  
} 
