#include<iostream>
using namespace std;
int main()
{
int x;
cout<<"enter the year which you want to you check whether it's a leap year or not: ";
cin>>x;
// first we need to check the year is divisible by 400 or not. 
if(x%400==0){
    cout<<x<<" is a leap year";

}
// if the year is not divisible by 400 it does not mean it is not a leap year , we eed to check it further by dividing 4 and by dividing 100 , 4 should divide the number and 100 should not divide the number , then the year is leap year. 

else if(x%4==0 && x%100!=0){
    cout<<x<<" is a leap year";
}
else cout<<"not a leap year";





// also written as:          if((x%100==0) || (x%4==0 && x%100!=0))
                        // cout<<"leap year ";
                        // else cout<<"not a leap year";

 return 0;
}