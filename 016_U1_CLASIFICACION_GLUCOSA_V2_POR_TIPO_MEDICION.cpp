#include <iostream>
using namespace std;

int main() {
    int tipo;
    double g;
    cout << "Tipo de medicion:" << endl;
    cout << "1. En ayunas" << endl;
    cout << "2. Postprandial (2 horas despues de comer)" << endl;
    cout << "3. Aleatoria" << endl;
    cout << "Opcion: ";
    cin >> tipo;
    cout << "Ingrese la glucosa (mg/dL): ";
    cin >> g;

    if (g < 0) {
        cout << "Valor invalido." << endl;
        return 1;
    }

    switch (tipo) {
        case 1:
            if (g < 70)        cout << "Hipoglucemia" << endl;
            else if (g < 100)  cout << "Normal" << endl;
            else if (g < 126)  cout << "Prediabetes" << endl;
            else               cout << "Diabetes (posible)" << endl;
            break;
        case 2:
            if (g < 70)        cout << "Hipoglucemia" << endl;
            else if (g < 140)  cout << "Normal" << endl;
            else if (g < 200)  cout << "Prediabetes" << endl;
            else               cout << "Diabetes (posible)" << endl;
            break;
        case 3:
            if (g < 70)        cout << "Hipoglucemia" << endl;
            else if (g < 200)  cout << "Sin indicio de diabetes (repetir en ayunas si hay dudas)" << endl;
            else               cout << "Diabetes (posible, con sintomas)" << endl;
            break;
        default:
            cout << "Tipo de medicion no valido." << endl;
    }
    cout << "Este resultado es orientativo; consulte a un medico." << endl;
    return 0;
}
