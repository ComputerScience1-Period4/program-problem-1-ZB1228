/* 
Zachary Bates - 9/21/2017 Period 4
Assignment name: Display Text
Introduction to C++ in Visual Studios 2015
*/

//Libraries 
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; 
 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	char m = '4';
	cout << "Hello World" << endl;
	cout << "By: Zachary Bates" << endl;
	cout << "Period " << m << endl;
	pause(); // pauses to see the displayed text
	return;
}