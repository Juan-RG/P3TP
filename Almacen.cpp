//
// Created by Juan on 21/03/2021.
//

#include "Almacen.h"

Almacen::Almacen(double volumen_) : capacidad(volumen_){ }

bool Almacen::guardar(Carga elemento) {
    if(capacidad > elemento.getVolumen()){     //Si tiene espacio en el contenedor
        elementos.push_back(elemento);         //lo guarda al final, como una cola
        capacidad -= elemento.getVolumen();    //se reduce la capacidad de cosas que puede meter
        return true;
    } else{
        return false;
    }
}


