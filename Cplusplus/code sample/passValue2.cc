/*to compile: icpc -o passingValue2 passingValue2.cc*/

#include <iostream>
#include <cstdlib>
using namespace std;
void add(int a, int b){
  int c;
  c = a + b;
  cout << "\n Addition is : " << c;
}
int main(int argc, char *argv[]){
 int a, b;
 if ( argc != 3 ){
   cout << "\nInsufficient num. of arguments.\n";
   cout << "\nUsage:" << argv[0] << " <firstNum> <secondNum>";
 }else{
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    add(a, b);
 }
 return 0;
}
