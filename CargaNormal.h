//
// Created by Juan on 29/03/2021.
//

#pragma once


#include "Carga.h"

class CargaNormal : public Carga {

public:
    CargaNormal(std::string nombre_, double  volumen_, double peso_) : Carga(nombre_, volumen_, peso_) {};
    virtual std::string to_string() const = 0;
};
