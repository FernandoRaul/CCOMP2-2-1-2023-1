#include <iostream>
#include "Fecha.h"

using namespace std;

int main() {
    Fecha fecha(3, 29, 2023);
    fecha.displayDate();
    fecha.setMes(13);
    fecha.setDia(32);
    fecha.setAnio(2024);
    fecha.displayDate();

    return 0;
}