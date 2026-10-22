#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double peso, altura;
    cout << "Ingrese el peso (kg): ";
    cin >> peso;
    cout << "Ingrese la altura (m): ";
    cin >> altura;

    double imc = peso / pow(altura, 2);
    cout << "IMC = " << imc << endl;

    if (imc < 25) {
        if (imc < 18.5) cout << "Bajo peso" << endl;
        else            cout << "Peso normal" << endl;
    } else {
        if (imc < 30) {
            cout << "Sobrepeso" << endl;
        } else {
            if (imc < 35)      cout << "Obesidad grado I" << endl;
            else if (imc < 40) cout << "Obesidad grado II" << endl;
            else               cout << "Obesidad grado III (morbida)" << endl;
        }
    }
    return 0;
}
