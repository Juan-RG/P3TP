//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "CargaEspecial.h"

class Toxico : public CargaEspecial {
public:
    Toxico(std::string nombre_, double  volumen_, double peso_): CargaEspecial(nombre_, volumen_, peso_) {};
    std::string to_string() const override{
        return this->nombre + " [" + std::to_string(this->volumen)
               + " m3] [" + std::to_string(this->peso) + " kg]";
    }
};



