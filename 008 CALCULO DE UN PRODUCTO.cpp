#include <iostream>
using namespace std;

int main() {
    const double IGV = 0.18;   // 18% en Peru
    double precio;
    cout << "Ingrese el precio del producto (sin IGV): ";
    cin >> precio;
    double igv = precio * IGV;
    double total = precio + igv;
    cout << "Precio base = " << precio << endl;
    cout << "IGV (18%)   = " << igv << endl;
    cout << "Total       = " << total << endl;
    return 0;
}
