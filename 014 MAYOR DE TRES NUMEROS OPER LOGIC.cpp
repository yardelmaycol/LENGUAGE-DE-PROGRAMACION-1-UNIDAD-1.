#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    if (a >= b && a >= c)
        cout << "El mayor es: " << a << endl;
    else if (b >= a && b >= c)
        cout << "El mayor es: " << b << endl;
    else
        cout << "El mayor es: " << c << endl;
    return 0;
}
