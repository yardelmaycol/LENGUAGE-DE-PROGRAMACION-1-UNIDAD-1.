#include <iostream>
#include <string>
using namespace std;

const string UNI[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
const string ESP[] = {"diez", "once", "doce", "trece", "catorce", "quince",
                      "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
const string DEC[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta",
                      "sesenta", "setenta", "ochenta", "noventa"};

string menor100(int n) {
    if (n < 10) return UNI[n];
    if (n < 20) return ESP[n - 10];
    if (n == 20) return "veinte";
    if (n < 30) return "veinti" + UNI[n - 20];
    string s = DEC[n / 10];
    if (n % 10) s += " y " + UNI[n % 10];
    return s;
}

int main() {
    int n;
    cout << "Ingrese un numero (1-100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Numero fuera de rango." << endl;
        return 1;
    }
    cout << n << " = " << (n == 100 ? "cien" : menor100(n)) << endl;
    return 0;
}
