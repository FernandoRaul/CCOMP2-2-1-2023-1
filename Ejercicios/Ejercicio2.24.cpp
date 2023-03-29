// Impar o par
#include <iostream>
using namespace std;

int main() {

    int num1, num2, res;
    
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    res=num1+num2;
    
    if(res%2==0){
        cout << "La suma de ambos números es par: " << res << endl;
    }
    else {
        cout << num1 << " " << num2 << " La suma de ambos números es impar: " << res << endl;
    }

    return 0;
}