#include <iostream>  
using namespace std;  
int main()  
{  
  char names[5][8] = {"rohan","geeta","rahul","rohit","rachana"};  
    for(int i=0;i<=5;i++)  
    { 
		 cout << names[i] << endl; 
		 cout<< *names[i]<<endl;
		 cout<<*(names+1)+0<<endl;
    }
    cout<<"---------------------------------------";
    for(int i=0;i<=5;i++)  
    { 
        for(int j=0;j<=5;j++)
        {
            cout<< names[i][j];
        }
        cout<<endl;
    }
    cout<<"======================================="<<endl;
    for(int i=0;i<=5;i++)  
    { 
        for(int j=0;j<=5;j++)
        {
            cout<<*(names+i)+j<<endl;
        }
        cout<<endl;
    }
    
    cout<<sizeof(names); 
}  

