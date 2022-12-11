#include <iostream>
#include <math.h>
using namespace std;
#define f(x) pow(x, 2)

void fib(double l, double r, double x2)
{
    double x1 = l + r - x2;
    for (int i = 0; i < 7; i++)
    {
        if (f(x1) < f(x2))
        {
            r = x2;
            x2 = x1;
            x1 = l + r - x2;
        }
        else
        {
            l = x1;
            x1 = x2;
            x2 = l + r - x1;
        }
    }
    double minima = (l + r) / 2;
    cout << "The point of minima is:" << minima << endl;
    cout << "Fuction at point of minima:" << f(minima);
}

int main()
{
    double l, r, x2;
    
    cout << "Enter the interval: ";
    cin >> l >> r;

    x2 = l + 0.619 * (r - l);
    fib(l, r, x2);
    return 0;
}