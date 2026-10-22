#include <iostream>
using namespace std;

int main() {
    double peso, altura;
    cout << "Ingrese el peso (kg): ";
    cin >> peso;
    cout << "Ingrese la altura (m): ";
    cin >> altura;

    double imc = peso / (altura * altura);
    cout << "IMC = " << imc << endl;

    // Se asigna un codigo de categoria (1 a 5) y se evalua con switch
    int categoria;
    if (imc < 18.5)      categoria = 1;
    else if (imc < 25)   categoria = 2;
    else if (imc < 30)   categoria = 3;
    else if (imc < 40)   categoria = 4;
    else                 categoria = 5;

    switch (categoria) {
        case 1: cout << "Bajo peso" << endl; break;
        case 2: cout << "Peso normal" << endl; break;
        case 3: cout << "Sobrepeso" << endl; break;
        case 4: cout << "Obesidad" << endl; break;
        case 5: cout << "Obesidad morbida" << endl; break;
    }
    return 0;
}
