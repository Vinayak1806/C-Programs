#include <iostream>
using namespace std;

int main()
{
    int i = 100;
    int *ptr = &i;
    int pptr = *ptr;
    cout << i << "\n";
    cout << *ptr << "\n";
    cout << pptr;
    return 0;
}