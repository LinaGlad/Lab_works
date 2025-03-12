#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    if (((a + b) >= c) && ((a + c) >= b) && ((c + b) > a) && (a > 0) && (b > 0) && (c > 0))
    {
        int perimeter = a + b + c;
        cout << "Perimeter: " << perimeter << endl;
        cout << "Area according to Heron's formula:" << sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c)) << endl;
        if (a == b or a == c or b == c)
        {
            cout << "Triangle is isosceles." << endl;
        }
        else {
            cout << "Triangle is not isosceles." << endl;
        }
    }
    else {
        cout << "we don't have this triangle." << endl;
    }

}
