#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    double fahrenheit = celsius * 9.0 / 5.0 + 32;
    cout << celsius << " C = " << fahrenheit << " F" << endl;

    double f;
    cout << "Ingrese la temperatura en grados Fahrenheit: ";
    cin >> f;
    double c = (f - 32) * 5.0 / 9.0;
    cout << f << " F = " << c << " C" << endl;
    return 0;
}
