#include<iostream>
using namespace std;
int main()
{
//  count even and odd elements in an array.
int arr[]={5,8,9,2,14,23,43,253,2734,2364,2378,1234};
int n=sizeof(arr)/sizeof(int);  // sizeof(arr) gives size in bytes and sizeof(int) gives size of one integer in bytes so dividing both we get number of elements in the array. like--:12*4/4=12.
int even=0;
int odd=0;
for(int i=0;i< n;i++){
    if(arr[i]%2==0){
        even++;

        }
        else{
            odd++;
        }
    }
cout<<"even elements are: "<<even<<endl;
cout<<"odd elements are: "<<odd;
 return 0;
}