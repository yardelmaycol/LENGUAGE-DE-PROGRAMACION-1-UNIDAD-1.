#include <iostream>
using namespace std;

int main() {
    double suma = 0,AltoC=0;
    double consumo=0;

    cout << "CONSUMO DE kWh UN HOGAR DURANTE 7 DIAS" << endl;

    for (int i = 1; i <= 7; i++) {
    	cout << "Ingrese el consumo en kWh dia " << i << ": "<<endl;
    	cin >> consumo;
        suma = suma + consumo;
        
        if (consumo > 15) {
            AltoC += 1;
        }
    }
    
    double prom = suma / 7
	;

    cout << "Consumo acumulado total de la semana: " << suma << endl;
	cout << "El promedio diario: " << prom << endl;
	cout << "Cantidad de dias con exceso de consumo: " << AltoC << endl;

    return 0;
}