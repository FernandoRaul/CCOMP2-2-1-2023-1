//1. Encuentra la suma de todos los múltiplos de 3 o 5 por debajo de 1000.
#include <iostream>
using namespace std;

int multiplos() {
    long long suma = 0;
    int num1 = 3, num2 = 5;

    for(int i = 3; i<1000; i++){
        if(i%3==0 || i%5==0)
            suma += i;
    }
    
    return suma;
}

int main() {

    cout << "La suma de los multiplos de 3 y 5 hasta 1000 es: " << multiplos() << endl;

    return 0;
}