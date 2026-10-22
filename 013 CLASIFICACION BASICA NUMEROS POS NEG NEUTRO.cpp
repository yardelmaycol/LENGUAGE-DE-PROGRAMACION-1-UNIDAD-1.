#include <iostream>
using namespace std;

int main() {
    double n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n > 0)
        cout << n << " es POSITIVO" << endl;
    else if (n < 0)
        cout << n << " es NEGATIVO" << endl;
    else
        cout << "El numero es NEUTRO (cero)" << endl;
    return 0;
}
