#include <iostream>
#include <cmath>
#include <iomanip>
#define f(x) pow(x, 3) - 4 * x - 9
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter the value of a & b for the expression:";
    cin >> a >> b;
    int e, f;
    while (e != f)
    {
        c = (a + b) / 2;
        e = (int)1000 * a;
        f = (int)1000 * b;
        if (f(c) == 0)
        {
            break;
        }
        if (f(c) < 0)
        {
            a = c;
        }
        if (f(c) > 0)
        {
            b = c;
        }
    }
    cout << "The root is : " << setprecision(4) << c << endl;
    return 0;
}