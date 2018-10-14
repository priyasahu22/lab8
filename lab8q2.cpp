//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
#include<iostream>
using namespace std;

 int largestarr(int arr[],int n)// passing an array within a function
 {  int max=arr[0]; 
   for(int i=0;i<n;i++)
 {
        
     
        
        if(arr[i]>max)
      {
           max=arr[i];

      } 
}
 return max;
 }
 int smallestarr(int arr[],int n)// passing an array within a function
 {
   int min=arr[0];
   for(int i=0;i<n;i++)
 {
       // cout<<"\n"<<arr[i];// everytime sum add new value to previous one
       
        if(arr[i]<min)
      {
           min=arr[i];

      } 
}
 return min;
 }
 float meanarr(int arr[],int sum,int n)// passing an array within a function
 {
  
   
   for(int i=0;i<n;i++)
 {
   sum=sum+arr[i];// everytime sum add new value to previous one
 } 

 return sum/n;
 }
 void medianarr(int arr1[],int n)// passing an array within a function
 {
  
   if(n%2==0)
{
 cout<<"\n"<<(arr1[(n/2)-1]+arr1[((n-1)/2)-1])/2; 
 
 }
else 
{
  cout<<"\n"<<arr1[(n+1)/2]; 
  

}






 }
// passing an array within a function
 void frequencyarr(int arr1[],int n)
 {
    int k=0;
   for(int i=0;i<n;i++)
 {
   if(arr1[i]==arr1[i+1])
 {
   k++;
 } 
}


 cout<<k;
 }

int main()
{
  int sum=0, n;
  cout<<"\n Enter the no. of  Array Elements:";
  cin>>n;
// loop entering the elements:
  int arr1[n]; 
 cout<<"\n enter the array elements:";
  for(int i=0;i<n;i++)
 {
  cin>>arr1[i];

 }
cout<<"\n THE LARGEST OF ENTERED ARRAY ELEMENT IS:  ";
// calling the function for find  LARGEST element
cout<<largestarr(arr1,n);//using name of array for passing it because it's name contains the address of the very first value
cout<<"\n THE SMALLEST OF ENTERED ARRAY ELEMENT IS:  ";
// calling the function for find SMALLEST of element
cout<<smallestarr(arr1,n);//using name of array for passing it because it's name contains the address of the very first value
cout<<"\n THE MEAN OF ENTERED ARRAY ELEMENT IS:  ";
// calling the function for find MEAN  of element
cout<<meanarr(arr1,sum,n);//using name of array for passing it because it's name contains the address of the very first value
cout<<"\n THE MEDIAN OF ENTERED ARRAY ELEMENT IS:  ";
// calling the function for find MEDIAN element
medianarr(arr1,n);//using name of array for passing it because it's name contains the address of the very first value
cout<<"\n THE FREQUENCY OF ENTERED ARRAYN ELEMENT IS:  ";
// calling the function for find FREQUENCY of element
frequencyarr(arr1,n);//using name of array for passing it because it's name contains the address of the very first value

return 0;
}
 

