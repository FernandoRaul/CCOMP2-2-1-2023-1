#include <iostream>
#include "Invoice.h"

using namespace std;

int main() {

    Invoice invoice1("723-14","Juego: The Last Of Us Part. I",1,220,10.5,10);
    cout << "El numero del objeto es: " << invoice1.getNumero() << endl;
    cout << "La descripción del objeto es: " << invoice1.getDescripcion() << endl;
    cout << "La cantidad del objeto es: " << invoice1.getCantidad() << endl;
    cout << "El precio del objeto es: " << invoice1.getPrecio() << endl;
    cout << "El VAT del objeto es: " <<invoice1.getVAT() << endl;
    cout << "Este objeto tiene un descuento de: " << invoice1.getDescuento() << endl;
    invoice1.getInvoiceAmount();

    return 0;
}