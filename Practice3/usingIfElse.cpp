#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number;
    int even_figures = 0;
    cout << "Write a number from 100 to 999 "; 
    cin >> number;
    int num1 = number / 10 / 10 % 10;
    int num2 = number / 10 % 10;
    int num3 = number % 10;
    if ( num1 %2 == 0)even_figures++;
    if ( num2 %2 == 0)even_figures++;
    if ( num3 %2 == 0)even_figures++;
    
    cout <<"Even figures are "<<even_figures;
    
}