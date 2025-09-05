#include<iostream>
using namespace std;
int sum(int n){
    if(n==1)
    return 1;
    return n+sum(n-1);
}
int main()
{
 cout<<sum(1)<<endl;
 cout<<sum(5)<<endl;
 cout<<sum(10)<<endl;
 cout<<sum(100);

 return 0;
}