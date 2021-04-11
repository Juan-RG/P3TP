
#pragma once

#include "Carga.h"

class Toxico : protected Carga {
private:
    inline static const std::string TIPO = "Productos Toxicos";
public:
    Toxico(std::string nombre_, double  volumen_, double peso_): Carga(nombre_, volumen_, peso_) {};

    std::string getNombre() const;

    double getPeso() const;

    double getVolumen() const;

    std::string to_string() const override;

    std::string getTipo() const override;
};



