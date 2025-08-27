#include<iostream>
#include <climits>
using namespace std;
int main()
{
// int arr[] = {10};
// int arr[] = {7, 7, 7, 7};
// int arr[] = {5, 8, 9, 43, 14, 23, 43};
// int arr[] = {7, 7, 7, 7};
// int arr[] = {-10, -20, -5, -1, -50};
// int arr[] = {10, 5};
// int arr[] = {10};
int arr[] = {5, 8, 9, 2, 14, 23, 43};
 int n=sizeof(arr)/sizeof(int);
 int largest=arr[0],secondlargest =INT_MIN;
 for(int i=1;i<n;i++){
    if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
    }
    else if(secondlargest<arr[i]&&arr[i]!=largest){
        secondlargest=arr[i];
    }
 }
 if(n<2){
    cout<<"only one element present, no second largest element";
 cout<<"\nand largest element is: "<<largest<<endl;
    return 0;
 }
 if(secondlargest==INT_MIN){
    cout<<"no second largest element";
 }
 else 
 cout<<"second largest element is: "<<secondlargest;
 cout<<"\nlargest element is: "<<largest<<endl;



 return 0;
}