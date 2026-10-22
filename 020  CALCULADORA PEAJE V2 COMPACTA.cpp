#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int vehiculo, pase;
    float peso;
    double descuentop = 0.0;
    double multa = 0.0;
    double montoi;

    cout << "SISTEMA DE COBRO DE PEAJE" << endl;
    cout << "Ingrese la categoria del vehiculo " << endl;
    cout << "\n 1: Auto/Camioneta($3.00)" << endl;
    cout << "\n 2: Autobus($6.00)" << endl;
    cout << "\n 3: Camion de carga($10.00)" << endl;
    cin >> vehiculo;

    cout << "Ingrese el peso total del vehiculo en toneladas" << endl;
    cin >> peso;

    if (peso <= 0) {
        cout << "ERROR: El peso del vehiculo ingresado debe de ser mayor a cero ";
        return 1;
    }
    else {
        cout << "Cuenta con pase electronico (Telepeaje)? (1,si o 0,no)" << endl;
        cin >> pase;

        if (pase == 1)
            descuentop = 0.15;

        if (vehiculo == 3 && peso >= 12) {
            multa = (peso - 12) * 2.5;
        }

        switch (vehiculo) {
            case 1:
                montoi = 3;
                break;
            case 2:
                montoi = 6;
                break;
            case 3:
                montoi = 10;
                break;
            default:
                cout << "ERROR: Codigo del servicio no valido" << endl;
                return 1;
        }

        double descuentof = montoi * descuentop;
        double montof = montoi - descuentof + multa;

        cout << fixed << setprecision(2);
        cout << "\n Boleta de Peaje" << endl;
        cout << "Monto Original: " << montoi << endl;
        cout << "Descuento total: " << descuentof << endl;
        cout << "Multas por exceso de peso: " << multa << endl;
        cout << "Monto Final: " << montof << endl;
    }

    return 0;
}
