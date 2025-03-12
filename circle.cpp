#include <iostream>
#include <iomanip> 
#include <locale.h>
const double pi = 3.14;
using namespace std;

int main() {
	float rad, a;
	cout << "Enter radius ";
	cin >> rad;
	cout << "Enter seqtor ";
	cin >> a;
	if (rad > 0 and a > 0, a<=360) {
		float lenght = 2 * pi * rad;
		float square = pi * rad * rad;
		float square_sector = square * a / 360;
		cout << fixed << "lenght: " << setprecision(2) << lenght << endl;
		cout << fixed << "square: " << setprecision(2) << square << endl;
		cout << fixed << "square_sector: " << setprecision(2) << square_sector << endl;
	}
	else {
		cout << fixed << "lenght: mistake" << endl;
		cout << fixed << "square: mistake" << endl;
		cout << fixed << "square_sector: mistake" << endl;
	}
}
