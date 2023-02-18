/* To compile: icpc -o doContinue doContinue.cc */

#include <iostream>
using namespace std;
int main(){
  int i;
  i = 0;
  while ( i < 20 ){
    i++;
    continue;
    cout << "Nothing to see\n";
  }
  return 0;
}

