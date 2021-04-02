//
// Created by Juan on 21/03/2021.
//

#pragma once

#include <string>
#include "Objeto.h"

class Carga : public Objeto {
private:
    std::string tipo = "Carga estandar";
public:
    Carga(const std::string nombre, double  volumen_, double peso_);
    virtual std::string getTipo() const;
 };



