#include <iostream>
using namespace std;

// This code is to make Arithmatic operation on given numbers

void sum(int a, int b)
{
    int s;
    s = a + b;
    cout << "Sum is: " << s;
}

void product(int a, int b)
{
    int p;
    p = a * b;
    cout << "Product is: " << p;
}

void avarage(int a, int b)
{
    float t;
    t = ((a + b) / 2);
    cout << "Avarage is: " << t;
}

int main()
{
    int a, b, choice;
    cout << "value of first no.";
    cin >> a;

    cout << "value of second no.";
    cin >> b;

    cout << "1. Sum of Number \n";
    cout << "2. Product of \n";
    cout << "3. Avarage of Number \n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        sum(a, b);
        break;

    case 2:
        product(a, b);
        break;

    case 3:
        avarage(a, b);
        break;

    default:
        cout << "Sorry their is error!..";
        break;
    }

    return 0;
}