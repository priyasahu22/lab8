
// Write a program to find sum of all elements of an array. (Use functions)
 #include<iostream>
 using namespace std;

 int sumarr(int arr[],int sum,int n)// passing an array within a function
 {
  
   
   for(int i=0;i<n;i++)
 {
   sum=sum+arr[i];// everytime sum add new value to previous one
 } 

 return sum;
 }

 int main()
 {
 int sum=0,n;

  cout<<"\n Enter the no u want in Array :";
  cin>>n;
  // loop entering the elements:
  int arr1[n];
  for(int i=0;i<n;i++)
 {
  cin>>arr1[i];

 }
 cout<<"\n THE SUM OF ENTERED NUMBER IS:  ";
 // calling the function for find summation of element
 cout<<sumarr(arr1,sum,n);//using name of array for passing it because it's name contains the address of the very first value

 return 0;
 }
  

