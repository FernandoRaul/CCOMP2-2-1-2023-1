#include "string"
#include <iostream>

class Invoice {
private:
    std::string numero;
    std::string descripcion;
    int cantidad;
    int precio;
    double tax{0.20};
    double desc{0};
    double amount{0};
public:
    explicit Invoice(std::string numeroObjeto, std::string descripcionObjeto, int cantidadObjeto, int precioObjeto, double VAT, double descuento):
        numero(numeroObjeto) {
            descripcion=descripcionObjeto;
            if(cantidadObjeto > 0){
                cantidad=cantidadObjeto;
            }
            else{
            }
            if(precioObjeto > 0){
            precio=precioObjeto;
            }
            else{
            }
            if(VAT>=0){
            tax=tax + VAT;
            }
            else{
            }
            if (descuento >= 0){
            desc=desc + descuento;
            }
            else{
            }
        }
    
    void setNumero(std::string numeroObjeto) {
        numero = numeroObjeto;
    }

    std::string getNumero() {
        return numero;
    }

    void setDescripcion(std::string descripcionObjeto) {
        descripcion = descripcionObjeto;
    }

    std::string getDescripcion() {
        return descripcion;
    }

    void setCantidad(int cantidadObjeto) {
        if(cantidadObjeto > 0){
                cantidad=cantidadObjeto;
            }
        else{
        }
    }

    int getCantidad() {
        return cantidad;
    }

    void setPrecio(int precioObjeto) {
        if(precioObjeto > 0){
            precio=precioObjeto;
            }
        else{
        }
    }

    int getPrecio() {
        return precio;
    }

    void setVAT(double VAT) {
        if(VAT>=0){
            tax= tax + VAT;
            }
        else{
        }
    }

    int getVAT() {
        return tax;
    }

    void setDescuento(double descuento) {
        if (descuento >= 0){
            desc=desc + descuento;
            }
        else{
        }
    }

    int getDescuento() {
        return desc;
    }

    void getInvoiceAmount() {
        amount = ((cantidad*precio)+tax)-desc;
        std::cout << "El monto de la factura es: " << amount << std::endl;
    }

};
