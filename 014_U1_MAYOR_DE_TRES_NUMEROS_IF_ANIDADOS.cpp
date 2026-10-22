#include <iostream>
using namespace std;

int main() {
    double a, b, c, mayor;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    if (a >= b) {
        if (a >= c) mayor = a;
        else        mayor = c;
    } else {
        if (b >= c) mayor = b;
        else        mayor = c;
    }
    cout << "El mayor es: " << mayor << endl;
    return 0;
}
