#pragma once

#include <string>
#include "Objeto.h"

class Carga : public Objeto {
private:
    static const std::string TIPO;
public:
    Carga(const std::string nombre, double  volumen_, double peso_);

    virtual std::string getTipo() const;
 };



