#include <iostream>
using namespace std;

int main() {
    int segundosTotales;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundosTotales;
    int horas = segundosTotales / 3600;
    int minutos = (segundosTotales % 3600) / 60;
    int segundos = segundosTotales % 60;
    cout << segundosTotales << " s = " << horas << " h, "
         << minutos << " min, " << segundos << " s" << endl;
    return 0;
}
