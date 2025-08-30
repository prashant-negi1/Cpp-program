#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int>vec;
 int num;
    cout<<"Enter 5 elements in vector"<<endl;
 for(int i=0;i<5;i++){
    cin>>num;
    vec.push_back(num);
 }

 int sum=0;
 for(int val:vec){// this is for each loop to iterate through all elements of vector it is not accessing index it access the value directly.
    sum=sum+val;
 }
 cout<<"sum of all elemnts of vector  "<<sum<<endl;
 cout<<"vector first element is "<<vec.front()<<endl;// we can access first element of vector  using front() function
 cout<<"vector last element is "<<vec.back()<<endl;//we can access last element of vector using back() function
 cout<<"vector is empty or not "<<vec.empty()<<endl;// we can check whether vector is empty or not using empty() function. if vector is empty it will return 1 otherwise 0.

 return 0;
}