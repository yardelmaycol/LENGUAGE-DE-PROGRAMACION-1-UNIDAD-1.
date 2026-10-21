#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    double area = PI * radio * radio;
    cout << "Area del circulo = " << area << endl;
    return 0;
}
