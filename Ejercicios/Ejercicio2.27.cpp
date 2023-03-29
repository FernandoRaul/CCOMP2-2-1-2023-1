//Equivalente entero de un caracter
#include <iostream>
using namespace std;

int main() {

    char caracter;

    cout << "Ingrese un caracter: ";
    cin >> caracter;

    cout << "El equivalente del caracter ingresado a enteros es: ";
    cout << static_cast<int>(caracter) << endl;

    return 0;
}

