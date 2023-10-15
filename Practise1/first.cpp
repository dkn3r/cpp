#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main()
{   
    int a = 2;
    double b = 200.0;
    double first = 0;
    double second = 0;
    double result = 0;
    
    first = 11.21 * (1 + log10(b / double(a))); 
    double ab_over_b = double(a) / b;
    second = 1 - sin(ab_over_b * M_PI) * cos(ab_over_b * M_PI);
    result = pow(first / second, 2.0 / 3.0);
    
    cout << result;
    
    return 0;
}
