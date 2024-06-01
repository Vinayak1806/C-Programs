#include <iostream>
using namespace std;

class Complex
{
    int a, b, t;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
    // we also create more than one constructor (overloding) in class

    Complex(void); // Constructor declaration

    Complex(int a, int b) // ----> This is a parameterized constructor it accepts 2 parameters
    {
        int s;
        s = a + b;
        t = s;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    void printNumber2()
    {
        cout << "Sum of number is " << t << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor it accepts no parameters
{
    a = 4;
    b = 5;

    // We also write like this --> cout<<"Hello world";
}

int main()
{
    Complex c1; // ---> Default constructor
    c1.printNumber();

    Complex f(4, 5); // ---> Parameterized constructor
    f.printNumber2();
    return 0;
}
