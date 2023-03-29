//Dígitos de un entero
#include <iostream>
using namespace std;

int main() {

    int num;
    int reversa;

    cout << "Ingrese un numero de CUATRO dígitos: ";
    cin >> num;

    reversa = num%10;
    num = num/10;
    
    cout << reversa << " ";

    reversa = num%10;
    num = num/10;
    
    cout << reversa << " ";

    reversa = num%10;
    num = num/10;
    
    cout << reversa << " ";

    reversa = num%10;
    num = num/10;
    
    cout << reversa << endl;

    return 0;
}