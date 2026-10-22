#include <iostream>
#include <string>
using namespace std;

// Compatibilidad solo por grupo ABO (A, B, AB, O)
int main() {
    string donante, receptor;
    cout << "Grupo del donante (A, B, AB, O): ";
    cin >> donante;
    cout << "Grupo del receptor (A, B, AB, O): ";
    cin >> receptor;

    for (char &ch : donante)  ch = toupper(ch);
    for (char &ch : receptor) ch = toupper(ch);

    bool dOk = (donante == "A" || donante == "B" || donante == "AB" || donante == "O");
    bool rOk = (receptor == "A" || receptor == "B" || receptor == "AB" || receptor == "O");
    if (!dOk || !rOk) {
        cout << "Grupo sanguineo no valido." << endl;
        return 1;
    }

    if (donante == "O")                      cout << "Compatible (O dona a todos)." << endl;
    else if (receptor == "AB")               cout << "Compatible (AB recibe de todos)." << endl;
    else if (donante == receptor)            cout << "Compatible (mismo grupo)." << endl;
    else                                     cout << "NO compatible." << endl;
    return 0;
}
