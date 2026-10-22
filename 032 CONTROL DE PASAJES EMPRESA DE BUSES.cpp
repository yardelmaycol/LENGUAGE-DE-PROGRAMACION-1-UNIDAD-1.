// Programa: Control de Pasajes - Empresa de Buses Rapido del Sur
// Funcion : Registra el monto pagado por 10 pasajeros usando un bucle for, calcula el dinero total recaudado (acumulador), cuenta cuantos pasajeros pagaron tarifa completa (S/. 15) con un contador, y muestra el total en caja, el promedio pagado y la cantidad de pasajeros con tarifa completa.
#include <iostream>
using namespace std;

int main() {
    double suma = 0, pago;
    int tarifaCompleta = 0;

    cout << "EMPRESA DE BUSES RAPIDO DEL SUR" << endl;
    cout << "CONTROL DE PASAJES" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese el monto pagado por el pasajero " << i << ": ";
        cin >> pago;

        suma = suma + pago;

        if (pago == 15) {
            tarifaCompleta += 1;
        }
    }

    double prom = suma / 10;

    cout << "\n--- Resumen del viaje ---" << endl;
    cout << "Dinero total acumulado en caja: S/." << suma << endl;
    cout << "Costo promedio pagado por pasajero: S/." << prom << endl;
    cout << "Cantidad total de pasajeros con tarifa completa: " << tarifaCompleta << endl;

    return 0;
}5
