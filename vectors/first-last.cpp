#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5,6,7,8,9,10};
    cout<<"First element of vector is "<<vec.front()<<endl;//accessing first element of vector using front() function
    cout<<"Last element of vector is "<<vec.back()<<endl;//accessing last element of vector using back() function
  if(vec.empty()){//checking whether vector is empty or not using empty() function
    cout<<"vector is empty"<<endl;
  }
  else{
    cout<<"vector is not empty"<<endl;
  }
 return 0;
}