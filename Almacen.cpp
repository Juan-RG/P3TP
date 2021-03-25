//
// Created by Juan on 21/03/2021.
//

#include "Almacen.h"

template <typename T>
Almacen<T>::Almacen(double capacidad_) : capacidad(capacidad_){ }

template <typename T>
bool Almacen<T>::guardar(const T& elemento) {
    if(capacidad > elemento.getVolumen()){     //Si tiene espacio en el contenedor
        elementos.push_back(elemento);         //lo guarda al final, como una cola
        capacidad -= elemento.getVolumen();    //se reduce la capacidad de cosas que puede meter
        return true;
    } else{
        return false;
    }
}


