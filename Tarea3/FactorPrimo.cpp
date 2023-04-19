//3.¿Cuál es el mayor factor primo del número 600851475143?
#include <iostream>
using namespace std;

long long factor(long long num) {
    long long max = 0;
    while (num % 2 == 0) {
        max = 2;
        num /= 2;
    }

    for (long long i = 3; i <= num; i+=2) {
        while (num % i == 0) {
            max = i;
            num /= i;
        }
    }

    return max;
}

int main() {

    long long num = 600851475143;

    cout << "El factor primo mas grande de " << num << " es: " << factor(num) << endl;

    return 0;
}
