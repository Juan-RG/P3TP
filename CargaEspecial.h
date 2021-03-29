//
// Created by theri on 24/03/2021.
//

#pragma once

#include "Carga.h"

class CargaEspecial : public Carga {

public:
    CargaEspecial(std::string nombre_, double  volumen_, double peso_) : Carga(nombre_, volumen_, peso_) {};
    std::string to_string() const override{
        return this->nombre + " [" + std::to_string(this->volumen)
               + " m3] [" + std::to_string(this->peso) + " kg]";
    }


};



