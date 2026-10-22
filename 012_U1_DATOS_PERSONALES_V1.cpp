#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, apellido, ciudad, dni;
    int edad;
    double estatura;

    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Apellido: ";
    getline(cin, apellido);
    cout << "DNI: ";
    getline(cin, dni);
    cout << "Ciudad: ";
    getline(cin, ciudad);
    cout << "Edad: ";
    cin >> edad;
    cout << "Estatura (m): ";
    cin >> estatura;

    cout << "\n===== DATOS PERSONALES =====" << endl;
    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "DNI            : " << dni << endl;
    cout << "Ciudad         : " << ciudad << endl;
    cout << "Edad           : " << edad << " anios" << endl;
    cout << "Estatura       : " << estatura << " m" << endl;
    return 0;
}
