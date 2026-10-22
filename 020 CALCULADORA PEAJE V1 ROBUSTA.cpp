#include <iostream>
#include <iomanip>
using namespace std;

// Lectura con validacion: repite hasta recibir un valor correcto
int leerEntero(const char *msg, int mn, int mx) {
    int v;
    while (true) {
        cout << msg;
        if (cin >> v && v >= mn && v <= mx) return v;
        cout << "Entrada invalida. Debe ser un entero entre " << mn << " y " << mx << "." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

double leerMonto(const char *msg, double minimo) {
    double v;
    while (true) {
        cout << msg;
        if (cin >> v && v >= minimo) return v;
        cout << "Monto invalido. Debe ser al menos " << minimo << "." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

int main() {
    cout << fixed << setprecision(2);
    cout << "=== CALCULADORA DE PEAJE ===" << endl;
    cout << "1. Moto" << endl;
    cout << "2. Auto" << endl;
    cout << "3. Camioneta" << endl;
    cout << "4. Bus" << endl;
    cout << "5. Camion (por eje)" << endl;

    int tipo = leerEntero("Tipo de vehiculo: ", 1, 5);
    double tarifa = 0;

    switch (tipo) {
        case 1: tarifa = 3.00;  break;
        case 2: tarifa = 7.50;  break;
        case 3: tarifa = 10.00; break;
        case 4: tarifa = 15.00; break;
        case 5: {
            int ejes = leerEntero("Numero de ejes (2-6): ", 2, 6);
            tarifa = 12.00 * ejes;
            break;
        }
    }

    cout << "Peaje a pagar: S/ " << tarifa << endl;
    double pago = leerMonto("Monto entregado: S/ ", tarifa);
    cout << "Vuelto: S/ " << pago - tarifa << endl;
    return 0;
}
