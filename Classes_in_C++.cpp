#include <iostream>
using namespace std;

class Marks
{
private:
    int a, b, c;

public:
    int d;

    int setdata(int a1, int b1, int c1) // declaration of marks
    {
        a = a1;
        b = b1;
        c = c1;
    }
    int marks()
    {
        cout << "Enter the marks of M2: " << a << endl;

        cout << "Enter the marks of C language: " << b << endl;

        cout << "Enter the marks of BEC: " << c << endl;

        cout << "Enter the marks of EEC: " << d << endl;
    }
    int result(int n)
    {
        int t;
        t = a + b + c + d;

        cout << "Total Marks:\t" << t << endl;
    }
};
int main()
{
    int i;
    Marks vinayak;

    vinayak.d = 20; // value of d is public we can change it anywher
    // vinayak.a=20; // value of a is private we can only change in class function

    vinayak.setdata(20, 19, 20); // mark declared
    vinayak.marks();
    vinayak.result(i);
    return 0;
}