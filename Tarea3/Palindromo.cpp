//4.Encuentra el palíndromo más grande hecho del producto de dos números de 3 dígitos.
#include <iostream>
using namespace std;

string palindromo(int num) {
    int inv = 0;
    int normal = num;

    while (num != 0) {
        int digito = num % 10;
        inv = inv * 10 + digito;
        num /= 10;
    }

    if(normal==inv){
        string a = "si";
        return a;
    }
    else{
        string b = "no";
        return b;
    }
}

int main()
{
    int pal = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int producto = i * j;

            if (palindromo(producto) == "si" && producto > pal) {
                pal = producto;
            }
        }
    }

    cout << "El palíndromo más grande en la multiplicación de dos números de 3 dígitos es: " << pal << endl;

    return 0;
}