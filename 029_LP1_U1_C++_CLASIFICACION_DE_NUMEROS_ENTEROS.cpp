// Programa: Clasificacion de Numeros Enteros
// Funcion : Solicita 10 numeros enteros, calcula su suma y cuenta cuantos son pares, impares y nulos usando un bucle for con acumulador y contadores multiples.
#include <iostream>
using namespace std;

int main() {
    double suma = 0;
    int NULO=0, PAR=0, IMPAR=0, n=0;

    cout << "NUMEROS PARES E IMPARES" << endl;
    
    for (int i = 1; i <= 10; i++) {
    	cout << "Ingrese el numero " << i << ": "<<endl;
    	cin >> n;
        suma = suma + n;
        
        if (n == 0) {
            NULO += 1;
        }
        
        if (n%2 == 0) {
            PAR += 1;
        }
        
        if (n%2 == 1) {
            IMPAR += 1;
        }
    }
    

    cout << "Suma total de numeros : " << suma << endl;         
	cout << "Total de numeros pares : " << P LO << endl;
	cout << "Total de numeros impares : " << IMPAR << endl;
	cout << "Total de numeros nulos : " << NULO << endl;

    return 0;
}