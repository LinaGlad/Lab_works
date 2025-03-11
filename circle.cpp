#include <iostream>
#include <iomanip> 
const double pi = 3.14; 
using namespace std;

int main() {
	float rad, a; 
	cout << "Enter radius ";
	cin >> rad; 
	cout << "Enter seqtor ";
	cin >> a; 
	float lenght = 2 * pi * rad; 
	float square = pi * rad * rad; 
	float square_sector = square * a / 360; 
	cout << fixed << setprecision(2) << lenght << endl; 
	cout << fixed << setprecision(2) << square << endl; 
	cout << fixed << setprecision(2) << square_sector << endl; 
}
