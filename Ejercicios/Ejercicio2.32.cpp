//Calculadora de frecuencia cardíaca máxima
#include <iostream>
using namespace std;

int main() {

    int edad;
    float comun, tanaka, gellish, nes;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    comun = 220 - edad;
    tanaka = 208 - (0.7*edad);
    gellish = 207 - (0.7*edad);
    nes= 211 - (0.64*edad);

    cout << "Tu frecuencia cardiaca máxima es: "<< endl;
    cout << "Comun: " << comun << endl;
    cout << "Tanaka: " << tanaka << endl;
    cout << "Gellish: " << gellish << endl;
    cout << "Nes: " << nes << endl;

    float menor, mayor;

    if(comun<=tanaka && comun<=gellish && comun<=nes){
        menor=comun;
        cout << "Considere como menor: " << menor << endl;
    }
    if(tanaka<comun && tanaka<=gellish && tanaka<=nes){
        menor=tanaka;
        cout << "Considere como menor: " << menor << endl;
    }
    if(gellish<comun && gellish<tanaka && gellish<=nes){
        menor=gellish;
        cout << "Considere como menor: " << menor << endl;
    }
    if(nes<comun && nes<tanaka && nes<gellish){
        menor=nes;
        cout << "Considere como menor: " << menor << endl;
    }

    if(comun>=tanaka && comun>=gellish && comun>=nes){
        mayor=comun;
        cout << "Considere como mayor: " << mayor << endl;
    }
    if(tanaka>comun && tanaka>=gellish && tanaka>=nes){
        mayor=tanaka;
        cout << "Considere como mayor: " << mayor << endl;
    }
    if(gellish>comun && gellish>tanaka && gellish>=nes){
        mayor=gellish;
        cout << "Considere como mayor: " << mayor << endl;
    }
    if(nes>comun && nes>tanaka && nes>gellish){
        mayor=nes;
        cout << "Considere como mayor: " << mayor << endl;
    }


    return 0;
}