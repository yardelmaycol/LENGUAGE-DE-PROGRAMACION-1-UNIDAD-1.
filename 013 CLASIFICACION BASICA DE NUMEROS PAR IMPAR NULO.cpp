#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;

    if (n == 0)
        cout << "El numero es NULO (cero)" << endl;
    else if (n % 2 == 0)
        cout << n << " es PAR" << endl;
    else
        cout << n << " es IMPAR" << endl;
    return 0;
}
