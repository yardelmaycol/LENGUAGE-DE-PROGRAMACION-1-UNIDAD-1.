#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double radio;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    double area = 4 * PI * radio * radio;
    double volumen = (4.0 / 3.0) * PI * radio * radio * radio;
    cout << "Area superficial = " << area << endl;
    cout << "Volumen = " << volumen << endl;
    return 0;
}
