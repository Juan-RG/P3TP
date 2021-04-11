
#include "Carga.h"

const std::string Carga::TIPO = "Carga estandar";

Carga::Carga(const std::string nombre_, double volumen_, double peso_) : Objeto(nombre_, volumen_, peso_){ }

std::string Carga::getTipo() const{
    return TIPO;
}
