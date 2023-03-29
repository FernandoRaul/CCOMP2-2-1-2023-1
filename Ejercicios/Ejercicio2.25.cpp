//Factores
#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3;

    cout << "Ingrese tres números: ";
    cin >> num1 >> num2 >> num3;

    if(num3%num1==0){
        cout << "El primer número es factor del tercer número" << endl;
    }
    else {
        cout << "El primer número NO es factor del tercer número" << endl;
    }

    if(num3%num2==0){
        cout << "El segundo número es factor del tercer número" << endl;
    }
    else {
        cout << "El segundo número NO es factor del tercer número" << endl;
    }

    return 0;
}