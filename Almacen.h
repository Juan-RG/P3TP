
#pragma once

#include <vector>
#include "Carga.h"

template <typename T>
class Almacen {
protected:
    double capacidad;
    std::vector<T*> elementos;

public:
    Almacen(double capacidad_): capacidad(capacidad_) {};

    //virtual bool guardar(T& elemento) = 0;

    void guardar(T& elemento){
           elementos.push_back(&elemento);        //lo guarda al final, como una cola
           capacidad -= elemento.getVolumen();    //Se reduce la capacidad de cosas que puede meter
    };

};
