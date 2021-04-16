#pragma once

#include "Carga.h"
#include <string>

class Producto : public Carga {
public:
    Producto(const std::string& nombre_, double  volumen_, double peso_);
    std::string to_string() const override;
};



