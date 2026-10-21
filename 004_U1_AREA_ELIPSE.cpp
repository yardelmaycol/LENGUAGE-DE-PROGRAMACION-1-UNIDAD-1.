#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double a, b;
    cout << "Ingrese el semieje mayor (a): ";
    cin >> a;
    cout << "Ingrese el semieje menor (b): ";
    cin >> b;
    double area = PI * a * b;
    cout << "Area de la elipse = " << area << endl;
    return 0;
}
