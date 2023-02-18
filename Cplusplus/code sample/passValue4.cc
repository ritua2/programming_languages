/*to compile: icpc -o passValue4 passValue4.cc*/

#include <iostream>
using namespace std;
int addUpdate(int *a, int *b){
  int c;
  c = *a + *b;
  cout << "Addition is : " << c <<endl;
  *a = c;
  *b = c;
  return c;
}
int main(){
  int a, b, c;
  cout << "Enter Any 2 Numbers : ";
  cin >> a >> b;
  cout << "a is: " << a << ", b is: " << b <<endl;
  c = addUpdate(&a, &b);
  cout << "a is: " << a << ", b is: " << b <<endl;
  return 0;
}

