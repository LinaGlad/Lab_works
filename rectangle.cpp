#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	cout << "Enter the first side : ";
	cin >> a;
	cout << "Enter the second side : ";
	cin >> b;
	if (a < 0 or b < 0) {
		cout << "Error in values" << endl;
	}
	else {
		cout << "Perimeter: " << 2 * (a + b) << endl;
		cout << "Square:" << (a * b) << endl;
		cout << "Diagonal length : " << sqrt(a * a + b * b);
		return 0;
	}
}
