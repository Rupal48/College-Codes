#include <iostream>
#include <math.h>
using namespace std;
// #define f(x, y) y-x      aese correct ans nhi aa rha
float f(float x, float y)
{
    return y - x;
}
int main()
{
    cout << "Name : Rupal Malhotra" << endl
         << "Branch : IT" << endl
         << "Section : B" << endl
         << "Enrollment No.: 07220803121" << endl
         << "Roll No. : 72" << endl;
    float x = 0.0, y = 2.0, h = 0.1;
    float k1 = h * f(x, y);
    float k2 = h * f(x + h / 2.0, y + k1 / 2.0);
    float k3 = h * f(x + h / 2.0, y + k2 / 2.0);
    float k4 = h * f(x + h, y + k3);
    y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
    cout << "Value of the function 'y-x' at x=0.1 : " << y;
    return 0;
}