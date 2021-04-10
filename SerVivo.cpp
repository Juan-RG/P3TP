#include "SerVivo.h"

std::string SerVivo::getNombre() const {
    return nombre;
}

double SerVivo::getPeso() const {
    return peso;
}

double SerVivo::getVolumen() const {
    return volumen;
}

std::string SerVivo::to_string() const {
    return  this->nombre + " [" + std::to_string(this->volumen)
    + " m3] [" + std::to_string(this->peso) + " kg]";
}

std::string SerVivo::getTipo() const{
    return tipo;
}