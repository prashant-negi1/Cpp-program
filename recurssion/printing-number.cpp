#include <iostream>
using namespace std;
// printing number from n to 1.
void print(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    print(n - 1);
}

// printing number from 1 to n.
void print1(int n)
{
    if (n == 0)
        return;

    print1(n - 1);
    cout << n << endl;
}
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n = 5;
    cout << "Printing from n" << " to 1" << endl;
    cout << "------------------" << endl;
    print(n);
    cout << "Printing from 1 to n" << endl;
    cout << "------------------" << endl;
    print1(n);
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}