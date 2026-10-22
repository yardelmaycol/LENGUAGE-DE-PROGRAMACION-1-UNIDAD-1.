#include <iostream>
#include <string>
using namespace std;

const string UNI[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
const string ESP[] = {"diez", "once", "doce", "trece", "catorce", "quince",
                      "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
const string DEC[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta",
                      "sesenta", "setenta", "ochenta", "noventa"};
const string CEN[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos",
                      "seiscientos", "setecientos", "ochocientos", "novecientos"};

string menor100(int n) {
    if (n < 10) return UNI[n];
    if (n < 20) return ESP[n - 10];
    if (n == 20) return "veinte";
    if (n < 30) return "veinti" + UNI[n - 20];
    string s = DEC[n / 10];
    if (n % 10) s += " y " + UNI[n % 10];
    return s;
}

string menor1000(int n) {
    if (n == 100) return "cien";
    if (n < 100) return menor100(n);
    string s = CEN[n / 100];
    if (n % 100) s += " " + menor100(n % 100);
    return s;
}

string aLetras(int n) {
    string s;
    int miles = n / 1000;
    int resto = n % 1000;
    if (miles > 0) {
        if (miles == 1) s = "mil";
        else            s = menor100(miles) + " mil";
    }
    if (resto > 0) {
        if (!s.empty()) s += " ";
        s += menor1000(resto);
    }
    return s;
}

int main() {
    int n;
    cout << "Ingrese un numero (1-10000): ";
    cin >> n;
    if (n < 1 || n > 10000) {
        cout << "Numero fuera de rango." << endl;
        return 1;
    }
    cout << n << " = " << aLetras(n) << endl;
    return 0;
}
