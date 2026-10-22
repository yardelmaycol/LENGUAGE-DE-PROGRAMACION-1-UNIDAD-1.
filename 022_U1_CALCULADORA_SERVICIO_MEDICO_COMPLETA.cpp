#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int servicio, seguro, edad;
    double costo = 0, pctSeguro = 0;
    const char *nombreServicio = "";
    const char *nombreSeguro = "";

    cout << "=== SERVICIOS MEDICOS ===" << endl;
    cout << "1. Consulta general (S/ 80)" << endl;
    cout << "2. Consulta especialista (S/ 150)" << endl;
    cout << "3. Laboratorio (S/ 60)" << endl;
    cout << "4. Emergencia (S/ 200)" << endl;
    cout << "Servicio: ";
    cin >> servicio;

    switch (servicio) {
        case 1: costo = 80;  nombreServicio = "Consulta general"; break;
        case 2: costo = 150; nombreServicio = "Consulta especialista"; break;
        case 3: costo = 60;  nombreServicio = "Laboratorio"; break;
        case 4: costo = 200; nombreServicio = "Emergencia"; break;
        default:
            cout << "Servicio invalido." << endl;
            return 1;
    }

    cout << "Seguro (0=Ninguno, 1=Basico 50%, 2=Premium 80%): ";
    cin >> seguro;
    switch (seguro) {
        case 0: pctSeguro = 0.0; nombreSeguro = "Ninguno"; break;
        case 1: pctSeguro = 0.5; nombreSeguro = "Basico"; break;
        case 2: pctSeguro = 0.8; nombreSeguro = "Premium"; break;
        default:
            cout << "Seguro invalido." << endl;
            return 1;
    }

    cout << "Edad del paciente: ";
    cin >> edad;
    if (edad < 0 || edad > 120) {
        cout << "Edad invalida." << endl;
        return 1;
    }

    double cobertura = costo * pctSeguro;
    double aPagar = costo - cobertura;

    // Descuento adicional: menores de 5 anios y adultos mayores (60+)
    double descEdad = 0;
    if (edad < 5 || edad >= 60) {
        descEdad = aPagar * 0.10;
        aPagar -= descEdad;
    }

    cout << fixed << setprecision(2);
    cout << "\n===== LIQUIDACION =====" << endl;
    cout << "Servicio          : " << nombreServicio << endl;
    cout << "Costo             : S/ " << costo << endl;
    cout << "Seguro " << nombreSeguro << "    : -S/ " << cobertura << endl;
    cout << "Descuento por edad: -S/ " << descEdad << endl;
    cout << "TOTAL A PAGAR     : S/ " << aPagar << endl;
    return 0;
}
