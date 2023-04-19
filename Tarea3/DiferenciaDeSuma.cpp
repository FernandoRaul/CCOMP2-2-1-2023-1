//6.Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.
#include <iostream>
using namespace std;

long long sumaDeCuadrados() {
    long long resultado = 0;
    for(int i=1; i<=100; i++){
        resultado += (i*i) ;
    }
    return resultado;
}

long long cuadradoDeSuma() {
    long long resultado = 0;
    for(int i=1; i<=100; i++){
        resultado += i;
    }
    return (resultado*resultado);
}

int main(){

    long long suma = sumaDeCuadrados();
    long long cuadrado = cuadradoDeSuma();
    long long resultado = (cuadrado - suma);
    cout << "La suma de los cuadrados de los cien primeros números naturales es: " << suma << endl;
    cout << "El cuadrado de la suma de los primeros cien números naturales es: " << cuadrado << endl;
    cout << "Por tanto, la diferencia entre la suma de los cuadrados de los cien primeros números naturales y el cuadrado de la suma es: " << resultado << endl;

    return 0;
}