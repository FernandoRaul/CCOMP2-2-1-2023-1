#include <string>
#include <iostream>

class Fecha {
public:
    Fecha(int m, int d, int a) {
        setMes(m);
        setDia(d);
        setAnio(a);
    }

    void setMes(int m) {
        if (m >= 1 && m <= 12) {
            mes = m;
        } else {
            mes = 1;
        }
    }

    int getMes() {
        return mes;
    }

    void setDia(int d) {
        dia = d;
    }

    int getDia() {
        return dia;
    }

    void setAnio(int a) {
        anio = a;
    }

    int getAnio() {
        return anio;
    }

    void displayDate() {
        std::cout << mes << "/" << dia << "/" << anio << std::endl;
    }
private:
    int mes;
    int dia;
    int anio;
};