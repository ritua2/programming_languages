/*to compile: icpc -o inherit1 inherit1.cc*/

#include <iostream>
using namespace std;

class Mother {
  public:
    Mother (){
    	cout << "Mother: no parameters\n";
    }
    Mother (int a){
    	cout << "Mother: int parameter\n";
    }
};

class Daughter : public Mother {
  public:
    Daughter (int a){
    	cout << "Daughter: int parameter\n\n";
    }
};

class Son : public Mother {
  public:
    Son (int a): Mother (0){
    	cout << "Son: int parameter\n\n";
    }
    Son(){
    	cout <<"none";
    }
};

int main () {
  Daughter Cynthia (0);
  Son Daniel(0);
  Son none;

  return 0;
}

