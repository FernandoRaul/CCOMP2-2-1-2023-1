//2.Al considerar los términos en la sucesión de Fibonacci cuyos valores no superan los cuatro millones, encuentre la suma de los términos de valor par.
#include <iostream>
using namespace std;

long long fibo() {
    long long suma = 0;
    int num1, num2,fibo;
    num1 = num2 = fibo = 1;
    for(int i = 1; i < 33; i++) { //para el numero 33 primero tuve que encontrar cual era el fibo que era menor a 4000000 y ese es 33 que vale 3524578
        if(fibo%2==0){
            suma += fibo;
        }
        fibo = num1 + num2;
        num1 = num2;
        num2 = fibo;
        }
    return suma;
}

int main() {

    cout << "La suma de los Fibonacci pares hasta 4000000 es: " << fibo() << endl;

    return 0;
}