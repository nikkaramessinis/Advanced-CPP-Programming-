#include <iostream>
#include <string>
#include "Complex.h"

using namespace caveofprogramming;
int main() {
	Complex c1(3, 3);
	Complex c2(3, 2);


	if (c1 == c2) {
	
		cout << "Equal" << endl;
	}
	else {
		cout << "Not equal" << endl;
	}

	if (c1 != c2) {

		cout << "Not equal" << endl;
	}
	else {
		cout << "Equal" << endl;
	}
	cout << *c1 +Complex(4,3)<< endl;
	while (1);
}