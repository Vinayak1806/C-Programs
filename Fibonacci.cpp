#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Fibonacci of the number is: " << fib(n);
    return 0;
}
