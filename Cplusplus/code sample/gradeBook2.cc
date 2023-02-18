/*to compile: icpc -o gradeBook2 gradeBook2.cc*/


#include <iostream>
#include <string>
using namespace std;

class GradeBook{
public:
	void displayMessage(string nameOfCourse){
		cout << "Welcome to the Grade Book for " << nameOfCourse << "!\n" ;
	}
};

int main(){
	string nameOfCourse;
	GradeBook myGradeBook;
	cout << "Enter the course name" << endl;
	getline(cin, nameOfCourse);
	myGradeBook.displayMessage(nameOfCourse);
    return 0;
}


