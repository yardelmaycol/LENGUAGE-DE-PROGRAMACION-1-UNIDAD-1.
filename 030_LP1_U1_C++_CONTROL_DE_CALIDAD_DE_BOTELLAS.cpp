// Programa: Control de Calidad de Botellas
// Funcion : Solicita el peso de 8 botellas, valida que sean mayores a 0 (saltando los invalidos con continue), calcula la suma, el promedio (dividiendo entre los validos), el peso maximo, el peso minimo y cuenta cuantas botellas tienen bajo peso (< 490 gramos) usando un bucle for con acumulador, contador y max/min.
#include <iostream>
using namespace std;

int main() {
    double MAX = 0, MIN = 999, suma = 0, prom = 0, p = 0;
    int BAJOP = 0, validos = 0;

    cout << "CONTROL DE CALIDAD EN PLANTA INDUSTRIAL" << endl;

    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese el peso de la botella " << i << ": ";
        cin >> p;

        if (p <= 0) {
            cout << "El peso ingresado debe ser mayor a 0" << endl;
            continue;
        }

        suma = suma + p;
        validos++;

        if (p > MAX) MAX = p;
        if (p < MIN) MIN = p;
        if (p < 490) BAJOP += 1;
    }

    if (validos > 0) {
        prom = suma / validos;
    } else {
        prom = 0;
    }

    cout << "Suma total de pesos: " << suma << endl;
    cout << "Promedio de pesos: " << prom << endl;
    cout << "Peso minimo: " << MIN << endl;
    cout << "Peso maximo: " << MAX << endl;
    cout << "Total de botellas con bajo peso: " << BAJOP << endl;

    return 0;
}