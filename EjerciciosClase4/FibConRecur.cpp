#include <iostream>
using namespace std;
//long long
int fibonacci(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else {
        return fibonacci(n-2) + fibonacci (n-1);
    }
}

void ImprimirNFibo(int n) {
    for(int i = 0; i < n; i++)
        cout << "El fib es " << fibonacci(i) << endl;
}

int main(){
    
    int n;

    cout << "Ingrese un numero fib: ";
    cin >> n;

    ImprimirNFibo(n);

    return 0;
}