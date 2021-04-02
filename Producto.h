//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "Carga.h"
#include <string>

class Producto : public Carga {
public:
    Producto(const std::string& nombre_, double  volumen_, double peso_);
    std::string to_string() const override;

};



