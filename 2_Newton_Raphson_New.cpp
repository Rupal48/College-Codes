#include <iostream>
#include <cmath>
#include <iomanip>
#define e 2.718
#define diff 0.001
using namespace std;
// #define f(x) cos(x) - x *pow(e, x)                   making func like this doesnt give the right nas in thius question
// #define g(x) -sin(x) - pow(e, x) - x * pow(e, x);      
float f(float x)
{
    return cos(x) - x * pow(e, x);
}
float g(float x)
{
    return -sin(x) - pow(e, x) - x * pow(e, x);
}
using namespace std;
int main()
{
    float x0 = 0;
    float h = f(x0) / g(x0);
    while (abs(h) >= diff)
    {
        h = f(x0) / g(x0);
        x0 = x0 - h;
    }
    cout << x0;
    return 0;
}