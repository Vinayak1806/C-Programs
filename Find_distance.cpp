// Distance between two points on graph

#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int a1, a2, b1, b2;
    friend point formula(int x1, int x2, int y1, int y2);

public:
    void setdata(int x1, int x2, int y1, int y2)
    {
        x1 = a1;
        x2 = a2;
        y1 = b2;
        y2 = b2;
    }
    void formula(int x1, int x2, int y1, int y2);
};

void point ::formula(int x1, int x2, int y1, int y2)
{
    float s;
    s = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    cout << "answer is " << s << endl;
}
int main()
{
    point p;
    p.formula(2, 4, 4, 6);

    return 0;
}