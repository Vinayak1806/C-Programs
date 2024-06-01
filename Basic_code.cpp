#include <iostream>
using namespace std;

// OOP's - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i;
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter number to crate table :";
    cin >> n;
    table(n);

    return 0;
}