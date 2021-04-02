//
// Created by Juan on 21/03/2021.
//

#include "Carga.h"

Carga::Carga(const std::string nombre_, double volumen_, double peso_) : Objeto(nombre_, volumen_, peso_){ }

std::string Carga::getTipo() const{
    return tipo;
}
