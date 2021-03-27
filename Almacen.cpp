//
// Created by Juan on 21/03/2021.
//

#include "Almacen.h"
#include <iostream>

using namespace std;

template <>
Almacen<Carga>::Almacen(double capacidad_) : capacidad(capacidad_){ }

/*template <>
bool Almacen<Carga>::guardar(Carga& elemento) { //TODO: vale y como hago que ademas de reducir la capacidad,
                                                //TODO: aumentar el volumen y aumentar el peso, hay que meter
                                                //TODO: esto en contenedor para hacer eso no???
    if(capacidad > elemento.getVolumen()){     //Si tiene espacio en el contenedor
        elementos.push_back(&elemento);       //lo guarda al final, como una cola
        capacidad -= elemento.getVolumen();    //se reduce la capacidad de cosas que puede meter
        return true;
    } else{
        return false;
    }
}*/


