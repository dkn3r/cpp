#include <iostream>
#include <string>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main() 
{
    int a = 3;
    double b = 0,707;
    double result = 0;
    result = abs(0.5 * sin(log10(exp(b+a))*M_PI/8)+1.308*cos(log10(exp(a-b))*M_PI/8));
    cout << result;
}