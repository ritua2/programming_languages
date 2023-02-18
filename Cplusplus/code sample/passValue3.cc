/*to compile: icpc -o passValue3 passValue3.cc*/

#include <iostream>
#include <cstdlib>
using namespace std;
int add(int a, int b){
  int c;
  c = a + b;
  return c;
}
int main(int argc, char *argv[]){
 int a, b, c;
 if ( argc != 3 ){
   cout << "\nInsufficient num. of arguments.\n";
   cout << "\nUsage:" << argv[0] << " <firstNum> <secondNum>";
 }else{
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = add(a, b);
    cout << "\n Addition is : " << c;
 }
 return 0;
}


