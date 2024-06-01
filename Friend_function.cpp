
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/

#include <iostream>
using namespace std;

class value; // decleration

class sum
{
    int a, b;

    // we can use private data of class by using friend function

    friend sum getdata(int x, int y); // Friend function (1)
    friend class value;               // Friend function for all class (2)
};
class value
{

public:
    sum setdata(int a, int b)
    {
        int add;
        add = a + b;
        cout << "Sum is: " << add;
    }
};

int main()
{
    value v;
    v.setdata(10, 30);

    return 0;
}