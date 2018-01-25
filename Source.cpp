#include <iostream>
using namespace std;
char main() {
	char a;
	char b;
	char c;
	cout << "your password ples" << endl;
	cin >> a;
	cin >> b; 
	cin >> c;

	if (a == 'N' && b == 'E'&& c == 'S')
		cout << "correct!" << endl;
	else
		cout << "you suck!" << endl;
}