//
// Created by Juan on 21/03/2021.
//

#include "Toxico.h"

std::string Toxico::getNombre() const {
    return nombre;
}

double Toxico::getPeso() const {
    return peso;
}

double Toxico::getVolumen() const {
    return volumen;
}
std::string Toxico::to_string() const {
    return this->nombre + " [" + std::to_string(this->volumen)
    + " m3] [" + std::to_string(this->peso) + " kg]";
}

std::string Toxico::getTipo() const{
    return tipo;
}