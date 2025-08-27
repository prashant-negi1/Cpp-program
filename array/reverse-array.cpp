#include<iostream>
using namespace std;
int main()
{
    // reverse an array.
 int arr[]={4,5,6,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0,j=n-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
    cout<<"reversed array is: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    

 return 0;
}