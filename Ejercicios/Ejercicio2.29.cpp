//Tabla
#include <iostream>
using namespace std;

int main() {

    int lado=0;
    int area, volumen;

    area = 6*(lado*lado);
    volumen=(lado*lado*lado);

    cout << "Longitud de la \nCara del Cubo (cm)\tArea del Cubo\tVolumen del cubo" << endl;
    cout << lado << "\t\t\t" << area << "\t\t" << volumen << endl;

    lado=lado+1;

    area = 6*(lado*lado);
    volumen=(lado*lado*lado);

    cout << lado << "\t\t\t" << area << "\t\t" << volumen << endl;

    lado=lado+1;

    area = 6*(lado*lado);
    volumen=(lado*lado*lado);

    cout << lado << "\t\t\t" << area << "\t\t" << volumen << endl;

    lado=lado+1;

    area = 6*(lado*lado);
    volumen=(lado*lado*lado);

    cout << lado << "\t\t\t" << area << "\t\t" << volumen << endl;

    lado=lado+1;

    area = 6*(lado*lado);
    volumen=(lado*lado*lado);

    cout << lado << "\t\t\t" << area << "\t\t" << volumen << endl;

    return 0;
}