#include<iostream>
using namespace std;
int main()
{
    // find first and last occurence of an element in an array.
 int arr[]={1,2,3,4,5,6,7,2,8,9,8,6,5,6,7,8};
int n=sizeof(arr)/sizeof(int);
int target;
cout<<"enter the element you want to search: ";
cin>>target;
int first=0;
int last=0;
for(int i=0;i<n;i++){
    if(arr[i]==target){
        if(first==0){
            first=i+1;
        }
        last=i+1;
    }
}
cout<<"first occurence is at position: "<<first<<endl;
cout<<"last occurence is at position: "<<last;
 return 0;
}