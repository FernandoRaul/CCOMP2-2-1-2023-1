#include <iostream>
using namespace std;

void intercambio(int &a, int &b) {
    swap(a, b);

    cout << "El valor de a en main es: " << a << endl;
    cout << "El valor de b en main es: " << b << endl;
}

int main() {
    int q = 10;
    int r = 20;

    intercambio(q, r);

    cout << "El valor de q en main es: " << q << endl;
    cout << "El valor de r en main es: " << r << endl;

    return 0;
}