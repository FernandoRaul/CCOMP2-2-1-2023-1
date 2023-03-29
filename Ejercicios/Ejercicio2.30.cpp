//Calculadora de Índice de Masa Corporal
#include <iostream>
using namespace std;

int main() {

float peso, altura, IMC;

cout << "Ingrese su peso en kg: ";
cin >> peso;
cout << "Ingrese su altura en m: ";
cin >> altura;

IMC=peso/(altura*altura);

cout << "Su índice de masa corporal es: " << IMC << endl;
cout << "Rangos del IMC" << endl;
cout << "Bajo peso: Ménos de 18.5" << endl;
cout << "Normal: Entre 18.5 a 24.9" << endl;
cout << "Sobrepeso: Entre 25 a 29.9" << endl;
cout << "Obesidad: 30 o más" << endl;
    return 0;
}