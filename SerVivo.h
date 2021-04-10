#pragma once

#include "Carga.h"

class SerVivo : protected Carga {
private:
    std::string tipo = "Seres Vivos";
public:
    SerVivo(std::string nombre_, double  volumen_, double peso_): Carga(nombre_, volumen_, peso_) {};

    std::string getNombre() const override;

    double getPeso() const override;

    double getVolumen() const override;

    std::string to_string() const override;

    std::string getTipo() const override;
};


