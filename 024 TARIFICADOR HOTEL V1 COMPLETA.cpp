#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double IGV = 0.18;
    int tipo, noches, personas, temporada;
    char desayuno, extranjero;
    double tarifa = 0;
    const char *nombreHab = "";

    cout << "=== TARIFICADOR DE HOTEL ===" << endl;
    cout << "Habitacion (1=Simple S/120, 2=Doble S/180, 3=Suite S/350): ";
    cin >> tipo;
    switch (tipo) {
        case 1: tarifa = 120; nombreHab = "Simple"; break;
        case 2: tarifa = 180; nombreHab = "Doble";  break;
        case 3: tarifa = 350; nombreHab = "Suite";  break;
        default:
            cout << "Tipo de habitacion invalido." << endl;
            return 1;
    }

    cout << "Numero de noches: ";
    cin >> noches;
    cout << "Numero de personas: ";
    cin >> personas;
    if (noches <= 0 || personas <= 0) {
        cout << "Datos invalidos." << endl;
        return 1;
    }

    cout << "Temporada (1=Alta, 2=Baja): ";
    cin >> temporada;
    if (temporada != 1 && temporada != 2) {
        cout << "Temporada invalida." << endl;
        return 1;
    }
    cout << "Incluir desayuno (S/25 por persona por noche)? (s/n): ";
    cin >> desayuno;
    cout << "Huesped extranjero? (s/n) [exonerado de IGV]: ";
    cin >> extranjero;

    if (temporada == 1) tarifa *= 1.25;     // recargo temporada alta

    double alojamiento = tarifa * noches;
    double costoDesayuno = 0;
    if (desayuno == 's' || desayuno == 'S') costoDesayuno = 25.0 * personas * noches;

    double subtotal = alojamiento + costoDesayuno;

    // Descuento por estadia larga
    double pctDesc = 0;
    if (noches >= 7)      pctDesc = 0.10;
    else if (noches >= 3) pctDesc = 0.05;
    double descuento = subtotal * pctDesc;

    double base = subtotal - descuento;
    double igv = 0;
    if (!(extranjero == 's' || extranjero == 'S')) igv = base * IGV;
    double total = base + igv;

    cout << fixed << setprecision(2);
    cout << "\n===== FACTURA HOTEL =====" << endl;
    cout << "Habitacion " << nombreHab << " x " << noches << " noche(s)" << endl;
    cout << "Tarifa por noche : S/ " << tarifa << endl;
    cout << "Alojamiento      : S/ " << alojamiento << endl;
    cout << "Desayuno         : S/ " << costoDesayuno << endl;
    cout << "Descuento (" << pctDesc * 100 << "%) : -S/ " << descuento << endl;
    cout << "IGV              : S/ " << igv << endl;
    cout << "TOTAL            : S/ " << total << endl;
    return 0;
}
