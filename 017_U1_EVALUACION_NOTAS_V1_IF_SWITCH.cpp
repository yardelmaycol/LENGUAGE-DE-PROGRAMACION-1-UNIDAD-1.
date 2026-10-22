#include <iostream>
using namespace std;

// Escala vigesimal (0 - 20)
int main() {
    int nota;
    cout << "Ingrese la nota (0-20): ";
    cin >> nota;

    if (nota < 0 || nota > 20) {
        cout << "Nota fuera de rango." << endl;
        return 1;
    }

    switch (nota) {
        case 20: case 19: case 18:
            cout << "Excelente" << endl; break;
        case 17: case 16: case 15: case 14:
            cout << "Bueno" << endl; break;
        case 13: case 12: case 11:
            cout << "Regular (aprobado)" << endl; break;
        default:
            cout << "Desaprobado" << endl;
    }

    if (nota >= 11) cout << "Condicion: APROBADO" << endl;
    else            cout << "Condicion: DESAPROBADO" << endl;
    return 0;
}
