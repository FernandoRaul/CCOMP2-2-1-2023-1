#include <string>
#include <iostream>

class MotorVehicle {
public:
    explicit MotorVehicle(std::string marca, std::string tipoGasolina, int AdeManufactura, std::string color, int capacidadMotor):
        marc{marca}  {
            gasolina=tipoGasolina;
            ano=AdeManufactura;
            colo=color;
            motor=capacidadMotor;
        }
    void setMarca(std::string marca) {
        marc = marca;
    }

    std::string getMarca() {
        return marc;
    }

    void setTipoGasolina(std::string tipoGasolina) {
        gasolina = tipoGasolina;
    }

    std::string getTipoGasolina() {
        return gasolina;
    }

    void setAdeManufatura(int AdeManufactura) {
        ano = AdeManufactura;
    }

    int getAdeManufactura() {
        return ano;
    }

    void setColor(std::string color) {
        colo = color;
    }

    std::string getColor() {
        return colo;
    }

    void setCapacidad(int capacidadMotor) {
        motor = capacidadMotor;
    }

    int getCapacidad() {
        return motor;
    }

    void mostrarDetalles() {
        std::cout << "Marca: " << marc << std::endl;
        std::cout << "Tipo de Gasolina: " << gasolina << std::endl;
        std::cout << "Año: " << ano << std::endl;
        std::cout << "Color: " << colo << std::endl;
        std::cout << "Capacidad del motor: " << motor << std::endl << std::endl;
    }
private:
    std::string vehicle;
    std::string marc;
    std::string gasolina;
    int ano;
    std::string colo;
    int motor;
};