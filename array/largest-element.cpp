#include<iostream>
using namespace std;
int main()
{
//  find largest element in the array.
int arr[]={5,8,9,2,14,23,43,253,2734,2364,2378,1234};
int n=sizeof(arr)/sizeof(int);  // sizeof(arr) gives size in bytes and sizeof(int) gives size of one integer in bytes so dividing both we get number of elements in the array. like--:12*4/4=12.
int largest=arr[0];
for(int i=1;i< n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }

}
cout<<"largest element is: "<<largest;
 return 0;
}