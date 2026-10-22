// Programa: Registro de Clientes con bucle for (version con validacion)
// Funcion : Solicita el monto de pago de 8 clientes con validacion de montos positivos, calcula el total acumulado en caja, el promedio de consumo y cuenta cuantos clientes son preferenciales (pago > 100) usando un bucle for con acumulador y contador.
#include <iostream>
using namespace std;

int main() {
    double suma = 0, pago;
    int clientesPreferenciales = 0;

    cout << "REGISTRO DE CLIENTES" << endl;

    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese el monto de pago " << i << ": " << endl;
        cin >> pago;

        suma = suma + pago;

        if (pago > 100) {
            clientesPreferenciales += 1;
        }
    }

    double prom = suma / 8;

    cout << "Total acumulado en caja: S/." << suma << endl;
    cout << "El promedio de consumo es: S/." << prom << endl;
    cout << "Cantidad total de clientes preferenciales: " << clientesPreferenciales << endl;

    return 0;
}