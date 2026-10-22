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

    if (imc < 18.5)       cout << "Bajo peso" << endl;
    else if (imc < 25)    cout << "Peso normal" << endl;
    else if (imc < 30)    cout << "Sobrepeso" << endl;
    else if (imc < 35)    cout << "Obesidad grado I" << endl;
    else if (imc < 40)    cout << "Obesidad grado II" << endl;
    else                  cout << "Obesidad grado III (morbida)" << endl;
    return 0;
}
