//
// Created by Juan on 31/03/2021.
//

#include "Objeto.h"

Objeto::Objeto(const std::string nombre_, double  volumen_, double peso_): nombre(nombre_), volumen(volumen_), peso(peso_) {};

std::string Objeto::getNombre() const {
    return nombre;
}

double Objeto::getPeso() const {
    return peso;
}

double Objeto::getVolumen() const {
    return volumen;
}