// Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
#include<iostream>
using namespace std;
int small(int arr1[], int n, int k)
{	int temp,x;
	for(int i=1;i<=n;i++)//sorting the array ascending order
	{		
		for(int j=i+1;j<=n;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp  =arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
				
			}
		}
	}
	for(int i=1;i<=n;i++)//displaying the kth largest element
	{	
		if(i==k)
		cout<<"the ktk smallest element is:"<< arr1[i]<<endl;
	}
}

int large(int arr1[], int n, int k)
{	int temp,x;
	for(int i=1;i<=n;i++)//sorting the array in descending order
	{		
		for(int j=i+1;j<=n;j++)
		{
			if(arr1[i]<arr1[j])
			{
				temp  =arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
				
			}
		}
	}
	for(int i=1;i<=n;i++)//displayinf the kth largest element
	{	
		if(i==k)
		cout<<"the ktk largest element is:"<< arr1[i]<<endl;
	}
}
int main()
{
	int arr1[10],n,x,k;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	cout<<"enter the  elements of array"<<endl;
	for(int i=0; i<n; i++)//loop to take in values of array
	cin>>arr1[i];
	
	cout<<"which smallest element you want?"<<endl;
	cin>>x;
	small(arr1,n,k);
	cout<<"which largest element you want?"<<endl;
	cin>>k;
	large(arr1,n,k);
	return 0;

}

