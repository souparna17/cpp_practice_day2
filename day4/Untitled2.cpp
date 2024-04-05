#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,n,temp;
	cout<<"enter the elements in an array"<<endl;
	
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<9;i++)
	{
		for( int j= 0;j<i-1;j++)
		{
		
		
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	}
	for(i=0;i<10;i++)
	{
		cout<<"\t"<<arr[i];
	}
}
