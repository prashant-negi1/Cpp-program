#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> vec;//declaration of vector
  vector<int>vec1(5);//declaration of vector of size 5
  vector<int>vec2(5,1);//declaration of vector of size 5 and initialization of all elements with 1
  vector<int>vec3={1,2,3,4,5};//declaration and initialization of vector
  vec.push_back(7);//insertion in vector using push_back function
  vec.push_back(8);//insertion in vector using push_back function
  cout<<vec.at(0)<<endl;//accessing element at index 0using at() function
  cout<<vec.at(1);//accessing element at index 1 using at() function although we can also use vec[0] and vec[1] to access the elements.
  vec.pop_back();//removing last element from vector
    cout<<"\nSize of vector is "<<vec.size()<<endl;//size of vector using size() function
    cout<<"Capacity of vector is "<<vec.capacity()<<endl;//capacity of vector using capacity() function
    vector<int>vec5;
    int num;
    cout<<"Enter 10 elements in vector"<<endl;
    for(int i=0;i<10;i++){
        cin>>num;
        vec5.push_back(num);
    }
    cout<<"Elements in vector are "<<endl;
    for(int val:vec5){
        cout<<val<<" ";
    }
    
   return 0;
}