#include <iostream>
using namespace std;

bool esNumero(char character) {
    int val = static_cast<int>(character);
    if (val >= 48 && val <= 57)
        return 1;
    else
        return 0;
    //return (val >= 48 && val <= 57)
}

int main() {
    char character;

    cout << "Ingrese una caracter: ";
    cin >> character;

    cout << esNumero(character) << endl;

    return 0;
}