/* To compile: icpc -o doWhile doWhile.cc */

#include<iostream>
using namespace std;
int main(){
  int counter, value;
  value = 5;
  counter = 0;
  do{
    counter++;
    cout << "counter value is: " << counter << endl;
  }while ( counter < value);
  return 0;
}


