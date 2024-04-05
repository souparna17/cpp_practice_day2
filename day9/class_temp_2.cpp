//#include<iostream>
//using namespace std;
//template<class P,class Q=char>
//class Z
//{
//	public:
//		P x;
//		Q y;
//		void add()
//		{
//			cin>>x>>y;
//			cout<<x+y<<endl;
//		}
//};
//int main()
//{
//	Z<int> a;
//	a.add();
//	Z<int,int> b;
//	b.add();
//}

#include <iostream>  
using namespace std;
template<class T, class U = char>   
  class A 
{ 
public: 
    T x; 
    U y;
	void add()
	{
		cin>>x>>y;
		cout<<x+y<<endl;
	 } 
}; 
  
int main() 
{ 
    A<int> a;
	a.add(); 
    A<int, int> b; 
   b.add(); 
    return 0; 
} 
