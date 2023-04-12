#include <iostream>
using namespace std;

bool esNumero(char character) {
    int val = static_cast<int>(character);
    if (val >= 48 && val <= 57)
        return 1;
    else
        return 0;
    //return (val >= 48 && val <= 57)
}
int contarDigitosDeCadena(string cad) {
    int repeat = 0;
    for(int i=0; i < cad.length(); i++){
        if( esNumero(cad.at(i)))
            repeat++;
    }
    return repeat;
    
}
/*int contarDigitosDeCadena(string cad) {
    int repeat = 0;
    for(int i=0; i < cad.length(); i++){
        if(cad.at(i) >= 48 && cad.at(i) <= 57)
            repeat++;
    }
    return repeat;
}*/

int main() {
    string cad;

    cout << "Ingrese una cadena: ";
    cin >> cad;

    cout << "Hay " << contarDigitosDeCadena(cad) << " digitos en la cadena."<< endl;

    return 0;
}