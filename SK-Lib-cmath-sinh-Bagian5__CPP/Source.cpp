// C++ program to demonstrate the sinh()
// function When argument is too large

#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double x = 3000.0;

	double result = sinh(x);
	cout << "sinh(x) = " << result << endl;

	_getch();
	return 0;
}
