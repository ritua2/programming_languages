/*to compile: icpc -o testInclude testInclude.cc*/

#include <iostream>
#include "myHead.h"
using namespace std;

int main () {
  if (FRIEND < LIMIT && FOE > LIMIT){
	  cout << "Go, socialize more!";
	  cout << "\nYou have friends less than " << LIMIT <<endl;
	  cout << "\nYour foes are greater than " << LIMIT <<endl;
  }
  return 0;
}
