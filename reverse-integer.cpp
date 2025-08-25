#include<iostream>
using namespace std;
int main()
{
 int x=-8347;
 int digit, ans=0;
 while(x){
    // get last digit of the number 
    digit=x%10;
    // make the new reverse number
    ans=(ans*10)+digit;
    
    x=x/10;

 }
 cout<<"reverse of "<<x<<" is "<<ans;
 return 0;
}