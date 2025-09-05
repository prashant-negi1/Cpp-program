#include<iostream>
using namespace std;
int sum_of_square(int n){
    if (n==0){
return 0;
    }
    return n*n+ sum_of_square(n-1);
}
int main()
{
    cout<<sum_of_square(3)<<endl;
    cout<<sum_of_square(5)<<endl;

    cout<<sum_of_square(10)<<endl;

    cout<<sum_of_square(0)<<endl;
    
 
 return 0;
}