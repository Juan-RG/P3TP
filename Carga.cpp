//
// Created by Juan on 21/03/2021.
//

#include "Carga.h"

Carga::Carga(const std::string nombre_, double volumen_, double peso_) : nombre(nombre_), volumen(volumen_), peso(peso_) { }

std::string Carga::getNombre() const {
    return nombre;
}

double Carga::getPeso() const {
    return peso;
}

double Carga::getVolumen() const {
    return volumen;
}