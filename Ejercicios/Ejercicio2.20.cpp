//Diametro, circunferencia y area de un circulo
#include <iostream>
using namespace std;

int main() {

    int radio, diametro;
    float area, circunferencia;

    float pi = 3.14159;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    diametro = radio*2;
    circunferencia = 2*pi*radio;
    area = pi*(radio*radio);

    cout << "El diametro del Círculo es: " << diametro << endl;
    cout << "La circunferencia del Círculo es: " << circunferencia << endl;
    cout << "El área del Círculo es: " << area << endl;

    return 0;
}