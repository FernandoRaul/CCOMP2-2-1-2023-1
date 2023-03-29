//Enteros más grandes y más pequeños
#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3, num4, num5;
    cout << "Ingresa cinco enteros diferentes: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int corto;
    int largo;
    
    if(num1<=num2 && num1<=num3 && num1<=num4 && num1<=num5){
        corto=num1;
        cout << "El menor número es: " << corto << endl;
    }
    if(num2<num1 && num2<=num3 && num2<=num4 && num2<=num5){
        corto=num2;
        cout << "El menor número es: " << corto << endl;
    }
    if(num3<num1 && num3<num2 && num3<=num4 && num3<=num5){
        corto=num3;
        cout << "El menor número es: " << corto << endl;
    }
    if(num4<num1 && num4<num2 && num4<num3 && num4<=num5){
        corto=num4;
        cout << "El menor número es: " << corto << endl;
    }
    if(num5<num1 && num5<num2 && num5<num3 && num5<num4){
        corto=num5;
        cout << "El menor número es: " << corto << endl;
    }

    if(num1>=num2 && num1>=num3 && num1>=num4 && num1>=num5){
        largo=num1;
        cout << "El mayor número es: " << largo << endl;
    }
    if(num2>num1 && num2>=num3 && num2>=num4 && num2>=num5){
        largo=num2;
        cout << "El mayor número es: " << largo << endl;
    }
    if(num3>num1 && num3>num2 && num3>=num4 && num4>=num5){
        largo=num3;
        cout << "El mayor número es: " << largo << endl;
    }
    if(num4>num1 && num4>=num2 && num4>=num3 && num4>=num5){
        largo=num4;
        cout << "El mayor número es: " << largo << endl;
    }
    if(num5>num1 && num5>num2 && num5>num3 && num5>num4){
        largo=num5;
        cout << "El mayor número es: " << largo << endl;
    }

    return 0;
}