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

    //virtual bool guardar(T& elemento) = 0;

    bool guardar(T& elemento){
           elementos.push_back(&elemento);       //lo guarda al final, como una cola
           capacidad -= elemento.getVolumen();    //se reduce la capacidad de cosas que puede meter
    };

};


