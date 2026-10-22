#include <iostream>
using namespace std;
int main() {
    double glucosa;
    cout << "Ingrese la glucosa en ayunas (mg/dL): ";
    cin >> glucosa;

    if (glucosa < 0)        cout << "Valor invalido." << endl;
    else if (glucosa < 70)  cout << "Hipoglucemia" << endl;
    else if (glucosa < 100) cout << "Normal" << endl;
    else if (glucosa < 126) cout << "Prediabetes" << endl;
    else                    cout << "Diabetes (posible)" << endl;
    return 0;
}
