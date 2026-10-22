#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double IGV = 0.18;
    double peso, valorDeclarado;
    int destino;
    char express, asegurar;
    double tarifaKg = 0, minimo = 0;

    cout << "=== SISTEMA DE COBRO DE ENVIOS ===" << endl;
    cout << "Peso del paquete (kg, max 30): ";
    cin >> peso;
    if (peso <= 0 || peso > 30) {
        cout << "Peso no permitido." << endl;
        return 1;
    }

    cout << "Destino (1=Local, 2=Nacional, 3=Internacional): ";
    cin >> destino;
    switch (destino) {
        case 1: tarifaKg = 3.0;  minimo = 8.0;  break;
        case 2: tarifaKg = 6.0;  minimo = 15.0; break;
        case 3: tarifaKg = 20.0; minimo = 50.0; break;
        default:
            cout << "Destino invalido." << endl;
            return 1;
    }

    cout << "Envio express? (s/n): ";
    cin >> express;
    cout << "Desea asegurar el paquete? (s/n): ";
    cin >> asegurar;

    double costoBase = peso * tarifaKg;
    if (costoBase < minimo) costoBase = minimo;

    double recargoExpress = 0;
    if (express == 's' || express == 'S') recargoExpress = costoBase * 0.40;

    double seguro = 0;
    if (asegurar == 's' || asegurar == 'S') {
        cout << "Valor declarado (S/): ";
        cin >> valorDeclarado;
        if (valorDeclarado < 0) {
            cout << "Valor invalido." << endl;
            return 1;
        }
        seguro = valorDeclarado * 0.015;
    }

    double subtotal = costoBase + recargoExpress + seguro;
    double igv = subtotal * IGV;
    double total = subtotal + igv;

    cout << fixed << setprecision(2);
    cout << "\n===== RECIBO DE ENVIO =====" << endl;
    cout << "Costo base      : S/ " << costoBase << endl;
    cout << "Recargo express : S/ " << recargoExpress << endl;
    cout << "Seguro          : S/ " << seguro << endl;
    cout << "Subtotal        : S/ " << subtotal << endl;
    cout << "IGV (18%)       : S/ " << igv << endl;
    cout << "TOTAL           : S/ " << total << endl;
    return 0;
}
