#include <iostream>
using namespace std;
int pow(long long n)
{
    if (n == 0)
        return 1;

    return 2 * pow(n - 1);
}
int main()
{
    cout << pow(60);

    return 0;
}