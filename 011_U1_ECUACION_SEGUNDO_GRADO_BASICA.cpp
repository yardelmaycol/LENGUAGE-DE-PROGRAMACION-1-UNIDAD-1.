#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ecuacion ax^2 + bx + c = 0" << endl;
    cout << "Ingrese a (distinto de 0): ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    cout << "Ingrese c: ";
    cin >> c;

    double d = b * b - 4 * a * c;   // discriminante
    if (d >= 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        cout << "La ecuacion no tiene raices reales." << endl;
    }
    return 0;
}
