//10. Encuentra la suma de todos los números primos por debajo de dos millones.
#include <iostream>
using namespace std;

bool esPrimo(long long n) {
    int cont = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0)
            cont++;
    }
    if(cont==2)
        return true;
    else
        return false;
}

int main () {

    long long n = 1;
    long long resultado = 2;

    while (n <= 2000000) {
    if (esPrimo(n)) {
      resultado += n;
    }
    n+=2;
  }

  cout << "La suma de los números primos por debajo de 2000000 es: " << resultado << endl;
    //Este programa es demasiado lento.
    return 0;
}
