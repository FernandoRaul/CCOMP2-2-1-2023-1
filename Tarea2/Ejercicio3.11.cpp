#include <iostream>
#include "Vehicle.h"

using namespace std;

int main() {

    MotorVehicle carro1("Toyota", "Gasolina", 2023, "Negro", 2000);
    MotorVehicle carro2("Ford", "Diesel", 2022, "Rojo", 2500);
    carro1.mostrarDetalles();
    carro2.mostrarDetalles();
    
    return 0;
}