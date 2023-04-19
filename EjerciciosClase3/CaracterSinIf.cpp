#include <iostream>
using namespace std;

bool esCaracter(char character) {
    int val = static_cast<int>(character);
    bool x = ((val >= 65 && val <= 90) || (val >= 97 && val <= 122)) ? true : false;
    // return ((val >= 65 && val <= 90) || (val >= 97 && val <= 122))
    return x;
}

int main() {
    char character;

    cout << "Ingrese una caracter: ";
    cin >> character;

    cout << esCaracter(character) << endl;

    return 0;
}