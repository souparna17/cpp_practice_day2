#include<iostream>
using namespace std;
int main()
{
    int i, chk=0, j;
    cout<<"Prime Numbers Between 2 to 50 are:\n";
    for(i=1; i<=50; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            cout<<i<<endl;
        chk = 0;
    }
    cout<<endl;
    return 0;
}
