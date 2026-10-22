
#include <iostream>
using namespace std;

int main() {
    int suma = 0,nota=0,n;

    cout << "PROMEDIO DE NOTAS" << endl;
    cout << "Leer n notas" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
    	cout << "Ingrese la nota " << i << ": "<<endl;
    	cin >> nota;
        suma = suma + nota;
    }

    cout << "La suma de notas es: " << suma << endl;
	cout << "El promedio de notas es: " << suma/n << endl;

    return 0;
}
