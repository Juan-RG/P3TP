//
// Created by Juan on 21/03/2021.
//

#pragma once


#include "Carga.h"

class Toxico : protected Carga {
public:
    Toxico(std::string nombre_, double  volumen_, double peso_): Carga(nombre_, volumen_, peso_) {};

    std::string getNombre() const;

    double getPeso() const;

    double getVolumen() const;
    std::string to_string() const override;
};



