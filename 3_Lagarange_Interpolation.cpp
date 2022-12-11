#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float x[100], y[100], xp, yp = 0;
    int n;
    cout << "Enter number of data: ";
    cin >> n;
    cout << "Enter data:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i << "] = ";
        cin >> y[i];
    }
    cout << "Enter interpolation point: ";
    cin >> xp;
    for (int i = 0; i < n; i++)
    {
        float p = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }
        yp = yp + p * y[i];
    }
    cout << endl
         << "Interpolated value at " << xp << " is " << yp;

    return 0;
}