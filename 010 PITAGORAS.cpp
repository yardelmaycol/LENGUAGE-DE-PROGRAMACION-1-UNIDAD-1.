#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese el cateto a: ";
    cin >> a;
    cout << "Ingrese el cateto b: ";
    cin >> b;
    double hipotenusa = sqrt(a * a + b * b);
    cout << "Hipotenusa = " << hipotenusa << endl;
    return 0;
}
