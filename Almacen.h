//
// Created by Juan on 21/03/2021.
//

#pragma once

#include <vector>
#include "Carga.h"

template <typename T>
class Almacen {
protected:
    double capacidad;               //TODO:Constructor para meter capacidad de cada camion/contenedor?
                                    //TODO:que sera capacidad(volumen)????
    std::vector<T*> elementos;

public:
    Almacen(double capacidad): capacidad(capacidad) {};

    virtual bool guardar(T& elemento) = 0;

};


