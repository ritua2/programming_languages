//to compile: icpc -o readInput1 readInput1.cc

#include <iostream>
using namespace std;
int main(){
  int number1;
  int number2;
  int sum;
  cout << "Enter first integer: ";
  cin >> number1;
  cout << "Enter the second integer: ";
  cin >> number2;
  sum = number1 + number2;
  cout << "The sum of two numbers is: " << sum << endl;
  return 0;
}


