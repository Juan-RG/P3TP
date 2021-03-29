//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "CargaEspecial.h"

class SerVivo : public CargaEspecial {
public:
    SerVivo();
    std::string to_string() const override{
        return this->nombre + " [" + std::to_string(this->volumen)
               + " m3] [" + std::to_string(this->peso) + " kg]";
    }
};


