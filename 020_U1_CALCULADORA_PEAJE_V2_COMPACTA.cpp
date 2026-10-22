#include <iostream>
using namespace std;

int main() {
    const char *nombres[] = {"Moto", "Auto", "Camioneta", "Bus", "Camion"};
    const double tarifas[] = {3.00, 7.50, 10.00, 15.00, 24.00};

    int tipo;
    cout << "Vehiculo (1=Moto 2=Auto 3=Camioneta 4=Bus 5=Camion): ";
    cin >> tipo;

    if (tipo < 1 || tipo > 5) {
        cout << "Tipo invalido." << endl;
        return 1;
    }
    cout << nombres[tipo - 1] << " -> Peaje: S/ " << tarifas[tipo - 1] << endl;
    return 0;
}
