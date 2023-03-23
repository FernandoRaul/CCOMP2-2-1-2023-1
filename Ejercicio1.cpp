#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3;
    cout << "Input three different integers: ";
    cin >> num1 >> num2 >> num3;

    int sum = num1 + num2 + num3;
    cout << "Suma is: " << sum << endl;
    float average = (num1 + num2 + num3)/3;
    cout << "Average is: " << average << endl;
    int product = num1 * num2 * num3;
    cout << "Product is: " << product << endl;
    int smallest;
    if (num1<num2 && num1 < num3){
        smallest = num1;
        cout << "Smallest is: " << smallest << endl;
    }
    if (num2<num1 && num2<num3){
        smallest = num2;
        cout << "Smallest is: " << smallest << endl;
    }
     if (num3<num1 && num3<num2){
        smallest = num3;
        cout << "Smallest is: " << smallest << endl;
    }
    int largest;
    if (num1>num2 && num1>num3){
        largest = num1;
        cout << "Largest is: " << largest << endl;
    }
    if (num2>num1 && num2>num3){
        largest = num2;
        cout << "Largest is: " << largest << endl;
    }
     if (num3>num1 && num3>num2){
        largest = num3;
        cout << "Largest is: " << largest << endl;
    }
    return 0;
}