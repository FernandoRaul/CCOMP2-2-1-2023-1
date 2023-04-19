//7.¿Cuál es el número primo 10 001?
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

int main() {

    int contPrimos = 0;
    int n = 1;
    while (n <= 10001) {
    if (esPrimo(n)) {
      contPrimos++;
    }
    n++;
  }

    cout << "La posición del numero primo 10001 es: " << contPrimos << endl;

    return 0;
}