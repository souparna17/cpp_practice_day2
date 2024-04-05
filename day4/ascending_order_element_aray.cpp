#include<iostream>
using namespace std;
int main()
{
	int n,temp;
	cout<<"enter the number of elements in array: "<<endl;
	cin>>n;
	int arr[n];
	
	cout<<"enter the number of elements in array"<<endl;
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (arr[j]<arr[i])
			{
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		}
		cout<<"sorted array is"<<endl;
		for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}	
	return 0;
}


