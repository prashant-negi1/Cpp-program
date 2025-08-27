#include<iostream>
using namespace std;
int main()
{
    // linear search.
    int arr[]={28,34,65,65,32,44,54,34,65,34,54};
    int n=sizeof(arr)/sizeof(int);
    cout<<"enter the element you want to search: ";
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"element found at index: "<<i+1;
            return 0;
        }
       
    }
      cout<<"element not found ";
 
 return 0;
}