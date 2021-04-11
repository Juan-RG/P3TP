#pragma once

#include <string>
#include "Objeto.h"

class Carga : public Objeto {
private:
    inline static const std::string TIPO = "Carga estandar";
public:
    Carga(const std::string nombre, double  volumen_, double peso_);

    virtual std::string getTipo() const;
 };



