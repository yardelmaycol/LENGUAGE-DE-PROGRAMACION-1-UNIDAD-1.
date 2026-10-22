// Programa: Registro de Clientes con bucle for (version con validacion)
// Funcion : Solicita el monto de pago de 8 clientes con validacion de montos positivos, calcula el total acumulado en caja, el promedio de consumo y cuenta cuantos clientes son preferenciales (pago > 100) usando un bucle for con acumulador y contador.
#include <iostream>
using namespace std;

int main() {
    double suma = 0, temp;
    int alertaAltaTemp = 0;

    cout << "TEMPERATURA DE UN INVERNADERO" << endl;
    cout << "Lecturas cada 3 horas (5 registros en total)" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Ingrese la temperatura registrada " << i << ": " << endl;
        cin >> temp;

        suma = suma + temp;

        if (temp > 28) {
            alertaAltaTemp += 1;
        }
    }

    double prom = suma / 8;

    cout << "El promedio de temperatura es: " << prom << "C"<< endl;
    cout << "Cantidad total de alertas por calor extremo: " << alertaAltaTemp << endl;

    return 0;
}