#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double IGV = 0.18;
    double precio;
    int cantidad;
    char frecuente;

    cout << "Precio unitario (S/): ";
    cin >> precio;
    cout << "Cantidad: ";
    cin >> cantidad;
    cout << "Es cliente frecuente? (s/n): ";
    cin >> frecuente;

    if (precio <= 0 || cantidad <= 0) {
        cout << "Datos invalidos." << endl;
        return 1;
    }

    double subtotal = precio * cantidad;

    // Descuento por volumen de compra
    double pctDesc;
    if (subtotal >= 1000)     pctDesc = 0.15;
    else if (subtotal >= 500) pctDesc = 0.10;
    else if (subtotal >= 200) pctDesc = 0.05;
    else                      pctDesc = 0.0;

    // Descuento adicional por cliente frecuente
    if (frecuente == 's' || frecuente == 'S') pctDesc += 0.03;

    double descuento = subtotal * pctDesc;
    double baseImponible = subtotal - descuento;
    double igv = baseImponible * IGV;
    double total = baseImponible + igv;

    cout << fixed << setprecision(2);
    cout << "\n===== RESUMEN DE VENTA =====" << endl;
    cout << "Subtotal      : S/ " << subtotal << endl;
    cout << "Descuento (" << pctDesc * 100 << "%): S/ " << descuento << endl;
    cout << "Base imponible: S/ " << baseImponible << endl;
    cout << "IGV (18%)     : S/ " << igv << endl;
    cout << "TOTAL         : S/ " << total << endl;
    return 0;
}
