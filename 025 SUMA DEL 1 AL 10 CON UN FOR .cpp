#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    cout << "SUMAR NUMEROS DEL 1 AL 10" << endl;

    for (int i = 1; i <= 10; i++) {
    	cout << i << endl;
        suma = suma + i;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}
