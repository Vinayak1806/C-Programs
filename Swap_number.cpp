#include <iostream>
using namespace std;

// call by value
void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;

    cout << "change value of a is " << a << "\n";
    cout << "change value of b is " << b << "\n";
}

// call by reference
void swapno(int *x, int *y)
{
    int s;
    s = *x;
    *x = *y;
    *y = s;

    cout << "change value of x is " << *x << "\n";
    cout << "change value of y is " << *y;
}

int main()
{
    int a, b;
    cout << "value of a:";
    cin >> a;
    cout << "value of b:";
    cin >> b;

    swap(a, b);

    int x, y;
    cout << "value of x:";
    cin >> x;
    cout << "value of y:";
    cin >> y;

    swapno(&x, &y);

    return 0;
}