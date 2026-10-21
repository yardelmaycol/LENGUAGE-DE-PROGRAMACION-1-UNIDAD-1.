#include <iostream>
using namespace std;

int main() {
    double largo, ancho;
    cout << "Ingrese el largo: ";
    cin >> largo;
    cout << "Ingrese el ancho: ";
    cin >> ancho;
    cout << "Area = " << largo * ancho << endl;
    cout << "Perimetro = " << 2 * (largo + ancho) << endl;
    return 0;
}
