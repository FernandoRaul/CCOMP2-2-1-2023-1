#include <iostream>
using namespace std;

bool esCaracter(char character) {
    int val = static_cast<int>(character);
    if ((val >= 65 && val <= 90) || (val >= 97 && val <= 122))
        return 1;
    else
        return 0;
}

int main() {
    char character;

    cout << "Ingrese una caracter: ";
    cin >> character;

    cout << esCaracter(character) << endl;

    return 0;
}