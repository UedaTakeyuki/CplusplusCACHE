#include <iostream>
#include "Square.h"

using namespace std;

int main() {
	Square s;
	Square s2(3.0, 'b');

	cout << "s.area()=" << s.area() << ", s.colour()=" << s.colour() << endl;
	cout << "s2.area()=" << s2.area() << ", s2.colour()=" << s2.colour() << endl;

	return 0;
}