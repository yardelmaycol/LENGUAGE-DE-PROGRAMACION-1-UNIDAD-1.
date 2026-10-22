#include <iostream>
using namespace std;

// Comparaciones estrictas (>): detecta tambien los empates.
int main() {
    double a, b, c;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    if (a > b) {
        if (a > c)      cout << "El mayor es A: " << a << endl;
        else if (c > a) cout << "El mayor es C: " << c << endl;
        else            cout << "A y C empatan como mayores: " << a << endl;
    } else if (b > a) {
        if (b > c)      cout << "El mayor es B: " << b << endl;
        else if (c > b) cout << "El mayor es C: " << c << endl;
        else            cout << "B y C empatan como mayores: " << b << endl;
    } else {            // a == b
        if (c > a)      cout << "El mayor es C: " << c << endl;
        else if (c < a) cout << "A y B empatan como mayores: " << a << endl;
        else            cout << "Los tres numeros son iguales: " << a << endl;
    }
    return 0;
}
