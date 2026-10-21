#include <iostream>
using namespace std;

int main() {
    double base, altura;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    double area = (base * altura) / 2;
    cout << "Area del triangulo = " << area << endl;
    return 0;
}
