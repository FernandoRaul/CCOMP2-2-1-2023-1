//Calculadora de ahorro de coche compartido
#include <iostream>
using namespace std;

int main() {

    float CostoDiario, MillasConducidas, CostoPorGalon, MillasPromedio, TarifasEstacionamiento, Peajes;

    cout << "Ingresa tu total de millas recorridas por día: ";
    cin >> MillasConducidas;
    cout << "Ingresa tu costo por galon de gasolina: ";
    cin >> CostoPorGalon;
    cout << "Ingresa tus millas promedio por galon: ";
    cin >> MillasPromedio;
    cout << "Ingresa el costo de tus tarifas de estacionamiento por día: ";
    cin >> TarifasEstacionamiento;
    cout << "Ingresa el costo de tus peajes por día: ";
    cin >> Peajes;

    CostoDiario = ((MillasConducidas / MillasPromedio) * CostoPorGalon) + TarifasEstacionamiento + Peajes;

    cout << "Tu costo de manejo diario es: " << CostoDiario << endl;

    return 0;
}