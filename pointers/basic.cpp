#include<iostream>
using namespace std;
void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
int main()
{
 int x=347;
 int *ptr=&x;
 cout<<"value of a: "<<x<<endl;
 cout<<"address of a: "<<&x<<endl;
 cout<<"value of pointer ptr: "<<ptr<<endl;// value inside the pointer ptr is the address of varibale x.
 cout<<"value of a using pointer ptr: "<<*ptr<<endl;// dereferencing the pointer ptr to get the value of variable x. if we only cout ptr it will show the value of the pointer which is the address of the x but when we derefrence(*) the pointer ptr it will give the value of the address stored in the pointer ptr which is the value of x.
 cout<<"address of pointer ptr: "<<&ptr<<endl;// address of the pointer ptr.  although ptr is holding address but it needs the memory so it has also address . so pointer also have address

 int a=4;
 int *ptr1=&a;
 cout<<a<<endl;
 *ptr1=9;//changing the value of address which has holded by ptr1 which is the address of a so it will change the value of a.
 cout<<a<<endl;

int arr[] = {1,2,3,4,5};
  printArray(arr, 5);
 return 0;
}