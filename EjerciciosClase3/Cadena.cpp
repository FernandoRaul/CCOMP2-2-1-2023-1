#include <iostream>
using namespace std;

int contarCharDeCadena(string cad, char character) {
    int repeat = 0;
    for(int i=0; i < cad.length(); i++){
        if(cad.at(i)==character)
            repeat++;
    }
    return repeat;
}

int main() {
    string cad;
    char character;

    cout << "Ingrese una cadena: ";
    cin >> cad;
    cout << "Ingrese un caracter: ";
    cin >> character;

    cout << "El caracter " << character << " se repite " << contarCharDeCadena(cad,character) << " veces."<< endl;

    return 0;
}