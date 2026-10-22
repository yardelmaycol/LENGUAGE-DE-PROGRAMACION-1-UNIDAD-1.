#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double montoOriginal;
    int tipodecliente;
    double descuentoPorcentaje = 0.0;
    double descuentoAdicional = 0.0;
    double porcentajeTotal = 0.0;
    double montoDescuento = 0.0;
    double montoFinal = 0.0;

    cout << "Sistema de ventas y descuentos" << endl;
    cout << "Ingrese el monto total de la compra S/. ";
    cin >> montoOriginal;
    
    if(montoOriginal <= 0){
        cout << "ERROR, el monto debe ser un valor positivo" << endl; 
        return 1;
    }
    
    cout << "Seleccione el tipo de cliente" << endl;
    cout << "1: Cliente regular" << endl;
    cout << "2: Cliente miembro" << endl;
    cout << "3: Cliente VIP" << endl;
    cout << "OPCION: ";
    cin >> tipodecliente;   
    
    switch (tipodecliente){
        case 1:
            descuentoPorcentaje = 0.05;
            break;
        case 2:
            descuentoPorcentaje = 0.10;
            break;
        case 3:
            descuentoPorcentaje = 0.20;
            break;
        default:
            cout << "ERROR: Opcion del cliente no valida" << endl;
            return 1;
    }
    
    if(montoOriginal > 200.00){
        descuentoAdicional = 0.05;
    }
    
    porcentajeTotal = descuentoPorcentaje + descuentoAdicional;
    montoDescuento = montoOriginal * porcentajeTotal;
    montoFinal = montoOriginal - montoDescuento;
    
    cout << fixed << setprecision(2);
    cout << "Monto original: S/. " << montoOriginal << endl;
    cout << "Descuento total aplicado: " << (porcentajeTotal * 100) << "%" << endl;
    cout << "Monto de descuento: S/. " << montoDescuento << endl;
    cout << "Monto final a pagar: S/. " << montoFinal << endl;

    return 0;
}
