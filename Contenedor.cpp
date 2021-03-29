//
// Created by Juan on 21/03/2021.
//

#include "Contenedor.h"

/*
Contenedor<Carga>::Contenedor(double volumen_) : Carga::Carga("Contenedor", 0, 0), Almacen<Carga>(volumen_) { }

template <>
bool Contenedor<Carga>::guardar(Carga& elemento) { //TODO: vale y como hago que ademas de reducir la capacidad,
    //TODO: aumentar el volumen y aumentar el peso, hay que meter
    //TODO: esto en contenedor para hacer eso no???
    if(capacidad > elemento.getVolumen()){     //Si tiene espacio en el contenedor
        elementos.push_back(&elemento);       //lo guarda al final, como una cola
        capacidad -= elemento.getVolumen();    //se reduce la capacidad de cosas que puede meter
        Carga::peso += elemento.getPeso();
        Carga::volumen += elemento.getVolumen();
        return true;
    } else{
        return false;
    }
}

template <>
std::string Contenedor<Carga>::to_string() const {
    //TODO: COMO PONGO LO DE CARGA ESTANDAR? meto otro string tipo y que dependiendo de la carga que metas ese string
    //TODO: ponga una cosa u otra (carga toxica, carga estandar etc)???

    std::string frase = Carga::getNombre() + " [" + std::to_string(Carga::getVolumen())
                        + " m3] [" + std::to_string(Carga::getPeso() ) + " kg]\n";

    for(Carga* a : Almacen<Carga>::elementos){  //Devuelve el toString de cada uno de los elementos guardados
        frase = frase + "   " + a->to_string() + "\n"; //TODO: devuelve el toString de carga
    }

    return frase;
}

 */