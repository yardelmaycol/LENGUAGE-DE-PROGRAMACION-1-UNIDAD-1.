#include <iostream>
#include <string>

using namespace std;

// Función para convertir unidades (1-9) usando switch
string unidades(int n) {
    switch (n) {
        case 1: return "uno";
        case 2: return "dos";
        case 3: return "tres";
        case 4: return "cuatro";
        case 5: return "cinco";
        case 6: return "seis";
        case 7: return "siete";
        case 8: return "ocho";
        case 9: return "nueve";
        default: return "";
    }
}

// Función para convertir decenas (10-99) usando switch
string decenas(int n) {
    if (n < 10) {
        return unidades(n);
    } 
    else if (n >= 10 && n < 20) {
        switch (n) {
            case 10: return "diez";
            case 11: return "once";
            case 12: return "doce";
            case 13: return "trece";
            case 14: return "catorce";
            case 15: return "quince";
            case 16: return "dieciséis";
            case 17: return "diecisiete";
            case 18: return "dieciocho";
            case 19: return "diecinueve";
            default: return "";
        }
    } 
    else if (n >= 20 && n < 30) {
        if (n == 20) return "veinte";
        return "veinti" + unidades(n - 20);
    } 
    else {
        int d_idx = n / 10;
        int u_idx = n % 10;
        string decenaStr = "";

        switch (d_idx) {
            case 2: decenaStr = "veinte"; break;
            case 3: decenaStr = "treinta"; break;
            case 4: decenaStr = "cuarenta"; break;
            case 5: decenaStr = "cincuenta"; break;
            case 6: decenaStr = "sesenta"; break;
            case 7: decenaStr = "setenta"; break;
            case 8: decenaStr = "ochenta"; break;
            case 9: decenaStr = "noventa"; break;
        }

        if (u_idx == 0) {
            return decenaStr;
        }
        return decenaStr + " y " + unidades(u_idx);
    }
}

// Función para convertir centenas (100-999) usando switch
string centenas(int n) {
    if (n == 100) {
        return "cien";
    } 
    else if (n > 100 && n < 1000) {
        int c_idx = n / 100;
        int resto = n % 100;
        string centenaStr = "";

        switch (c_idx) {
            case 1: centenaStr = "ciento"; break;
            case 2: centenaStr = "doscientos"; break;
            case 3: centenaStr = "trescientos"; break;
            case 4: centenaStr = "cuatrocientos"; break;
            case 5: centenaStr = "quinientos"; break;
            case 6: centenaStr = "seiscientos"; break;
            case 7: centenaStr = "setecientos"; break;
            case 8: centenaStr = "ochocientos"; break;
            case 9: centenaStr = "novecientos"; break;
        }

        if (resto == 0) {
            return centenaStr;
        }
        return centenaStr + " " + decenas(resto);
    } 
    else {
        return decenas(n);
    }
}

// Función principal de conversión para el rango 1 - 1000
string numeroALetra(int n) {
    if (n == 1000) {
        return "mil";
    } 
    else if (n >= 1 && n < 1000) {
        return centenas(n);
    } 
    else {
        return "Número fuera de rango";
    }
}

int main() {
    // Bucle para mostrar del 1 al 1000 en la consola
    for (int i = 1; i <= 1000; i++) {
        cout << i << ": " << numeroALetra(i) << endl;
    }
    
    return 0;
}
