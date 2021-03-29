//
// Created by theri on 24/03/2021.
//

#pragma once

#include "Carga.h"

class CargaEspecial : public Carga {

public:
    CargaEspecial(std::string nombre_, double  volumen_, double peso_) : Carga(nombre_, volumen_, peso_) {};
    virtual std::string to_string() const = 0;
};



