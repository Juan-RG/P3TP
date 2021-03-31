//
// Created by Juan on 21/03/2021.
//

#pragma once


#include "Carga.h"

class Toxico : protected Carga {
public:
    Toxico(std::string nombre_, double  volumen_, double peso_): Carga(nombre_, volumen_, peso_) {};

    std::string getNombre() const {
        return nombre;
    }

    double getPeso() const {
        return peso;
    }

    double getVolumen() const {
        return volumen;
    }
    std::string to_string() const {
        return this->nombre + " [" + std::to_string(this->volumen)
               + " m3] [" + std::to_string(this->peso) + " kg]";
    }
};



