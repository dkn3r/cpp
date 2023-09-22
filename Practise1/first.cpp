#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{   
    int a = 2;
    double b = 200,0;
    double first = 0;
    double second = 0;
    double result = 0;
    first = 11.21 * (1 + log10(double(b) / a));
    second = 1 - sin(double(a / b) * M_PI) * cos(double(a / b) * M_PI);
    result = pow(first / second, 2.0 / 3.0);
    cout<<result;
}