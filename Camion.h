//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "Almacen.h"

template <typename T>
class Camion : public Almacen<T> {

public:
    Camion(double capacidad) : Almacen<T>(capacidad){};
    /*
    bool guardar(Carga& elemento){
        this->elementos.push_back(elemento);
        return true;
    };
     */
    /*
    std::string to_string();
    std::string nombre();
    double volumen();
    double peso();
     */
};



