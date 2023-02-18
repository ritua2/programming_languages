/*to compile: icpc -o testEnum testEnum.cc */


#include <iostream> 
using namespace std;

int main(){
 int j;
 enum NEWBOOLEAN {
   yes = 1,
   no = 0
 };

 NEWBOOLEAN myBool;
 
 cout<<"Please enter the value (0 to 1)";
 cin>>j;
 myBool = NEWBOOLEAN(j);

 cout<<"Boolean value you entered is: "<< myBool <<endl;
 myBool = NEWBOOLEAN(0);
 
 return 0;
}

