#include <iostream>
#include <string>
using namespace std;

bool grupoValido(const string &g) {
    return g == "A" || g == "B" || g == "AB" || g == "O";
}

int main() {
    string donante, receptor;
    cout << "Sangre del donante (ej. A+, O-, AB+): ";
    cin >> donante;
    cout << "Sangre del receptor (ej. A+, O-, AB+): ";
    cin >> receptor;

    for (char &ch : donante)  ch = toupper(ch);
    for (char &ch : receptor) ch = toupper(ch);

    if (donante.size() < 2 || receptor.size() < 2) {
        cout << "Formato invalido." << endl;
        return 1;
    }

    char rhD = donante.back();
    char rhR = receptor.back();
    string gD = donante.substr(0, donante.size() - 1);
    string gR = receptor.substr(0, receptor.size() - 1);

    if (!grupoValido(gD) || !grupoValido(gR) ||
        (rhD != '+' && rhD != '-') || (rhR != '+' && rhR != '-')) {
        cout << "Grupo o Rh no valido." << endl;
        return 1;
    }

    // Banderas de compatibilidad
    bool compatibleABO = (gD == "O") || (gR == "AB") || (gD == gR);
    bool compatibleRh  = (rhD == '-') || (rhR == '+');  // Rh+ solo dona a Rh+
    bool compatible    = compatibleABO && compatibleRh;

    cout << "Compatibilidad ABO: " << (compatibleABO ? "SI" : "NO") << endl;
    cout << "Compatibilidad Rh : " << (compatibleRh  ? "SI" : "NO") << endl;
    cout << "Resultado final   : " << (compatible ? "COMPATIBLE" : "NO COMPATIBLE") << endl;
    return 0;
}
