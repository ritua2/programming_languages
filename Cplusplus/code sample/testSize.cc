/* to compile: icpc -o testSize testSize.cc */

#include <iostream>

int main(){
 char c;
 int x;
 std::cout << "Size of variable c is: "<< sizeof(c) <<" bytes.\n";
 std::cout << "Size of variable x is: " << sizeof(x) << " bytes.\n";
 return(0);
}


