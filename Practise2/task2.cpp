#include <iostream>
#include <string>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main() 
{
  double x, y;
  cout << "Write x: ";
  cin >> x;
  cout << "Write y: ";
  cin >> y;
  
  if (x>=0 && y>=0 && x+y<=2){
      cout<<"Win!";
  }
  else{cout<<"Lose!"; }
  
}