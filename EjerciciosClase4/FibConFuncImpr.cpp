#include <iostream>
using namespace std;
// long long
int fib(int n) {
    int n1, n2, fibo;
    n1 = n2 = fibo = 1;
    for(int i = 1; i < n; i++) {
        fibo = n1 + n2;
        n1 = n2;
        n2 = fibo;
        }
    return fibo;
}

void ImprimirNFibo(int n) {
    for(int i = 0; i < n; i++)
        cout << "El fib es " << fib(i) << endl;
}

int main() {
    int n;

    cout <<"Ingrese el número: ";
    cin >> n;

    ImprimirNFibo(n);

    return 0;
}