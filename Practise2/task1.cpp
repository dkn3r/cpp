#include <iostream>
#include <string>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main() 
{
  int x, z;
  double result;
  cout << "Write x: ";
  cin >> x;
  cout << "Write z: ";
  cin >> z;
  if (x>=0){
      result = cos(x) - pow(sin(x),3);
  }
  else if (x<0){
      result = x*(exp(-x)+1/(x-1.3));
      }
  cout << "Result is: " << result;
}