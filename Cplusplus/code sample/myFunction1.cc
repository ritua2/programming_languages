/*to compile: icpc -o myFunction1 myFunction1.cc*/

#include <iostream>
using namespace std;
void add(){
  int a, b, c;
  cout << "\n Enter Any 2 Numbers : ";
  cin >> a >> b;
  c = a + b;
  cout << "\n Addition is : " << c;
}
int main(){
  add();
  add();
  return 0;
}


