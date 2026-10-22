#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double peso, altura;
    cout << "Ingrese el peso (kg): ";
    cin >> peso;
    cout << "Ingrese la altura (m): ";
    cin >> altura;
    if (peso <= 0 || peso > 500) {
        cout << "Error: peso fuera de rango (0 - 500 kg)." << endl;
        return 1;
    }
    if (altura <= 0 || altura > 3) {
        cout << "Error: altura fuera de rango (0 - 3 m)." << endl;
        return 1;
    }

    double imc = peso / pow(altura, 2);
    cout << "IMC = " << imc << endl;

    int categoria;
    if (imc < 18.5)     categoria = 1;
    else if (imc < 25)  categoria = 2;
    else if (imc < 30)  categoria = 3;
    else if (imc < 35)  categoria = 4;
    else if (imc < 40)  categoria = 5;
    else                categoria = 6;

    switch (categoria) {
        case 1: cout << "Bajo peso" << endl; break;
        case 2: cout << "Peso normal" << endl; break;
        case 3: cout << "Sobrepeso" << endl; break;
        case 4: cout << "Obesidad grado I" << endl; break;
        case 5: cout << "Obesidad grado II" << endl; break;
        case 6: cout << "Obesidad grado III (morbida)" << endl; break;
    }
    return 0;
}
