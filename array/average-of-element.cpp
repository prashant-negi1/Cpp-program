#include<iostream>
using namespace std;
int main()
{
//  average of all element of array.
int arr[]={7,8};
int n=sizeof(arr)/sizeof(int);
double sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
double average =sum/n;
cout<<"average of all element is: "<<average;
 return 0;
}