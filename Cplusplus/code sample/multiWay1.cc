/* to compile: icpc -o multiWay multiWay1.cc */

/* Theater lobby snack bar program */
#include <iostream>
using namespace std;
int main(){
	char c;
	cout <<"Please make your treat selection:\n";
	cout <<"1 - Beverage.\n";
	cout <<"2 - Candy.\n";
	cout <<"3 - Hot dog.\n";
	cout <<"4 - Popcorn.\n";
	cout <<"Your choice: ";
	/* Figure out what they typed in. */
	cin >> c;
	if(c=='1')
		cout <<"Beverage\nThat will be $8.00\n";
	else if(c=='2')
		cout <<"Candy\nThat will be $5.50\n";
	else if(c=='3')
		cout <<"Hot dog\nThat will be $10.00\n";
	else if(c=='4')
		cout <<"Popcorn\nThat will be $7.50\n";
	else{
		cout <<"That is not a proper selection.\n";
		cout <<"I’ll assume you’re just not hungry.\n";
		cout <<"Can I help whoever’s next?\n";
	}
	return(0);
}


