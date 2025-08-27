#include<iostream>
using namespace std;
int main()
{
//  sum of all element of array.
int arr[]={5,8,9,2,14,};
int n=sizeof(arr)/sizeof(int);
int sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
cout<<"sum of all element is: "<<sum;
 return 0;
}