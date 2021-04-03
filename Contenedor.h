//
// Created by Juan on 21/03/2021.
//

#pragma once

#include <iostream>
#include "Carga.h"
#include "Almacen.h"


template <typename T>
class Contenedor : public Carga, public Almacen<T> {

public:
    Contenedor(double capacidad) : Carga("Contenedor", capacidad, 0), Almacen<T>(capacidad){}; //toDo: Error si introduce volumen 0 quitado por almacen


    bool guardar(T& elemento) {
        if(this->capacidad >= elemento.getVolumen()){     //Si tiene espacio en el contenedor
            Almacen<T>::guardar(elemento);                //se reduce la capacidad de cosas que puede meter
            this->peso += elemento.getPeso();
            return true;
        } else{
            return false;
        }
    }

    std::string to_string() const override {
        //TODO: COMO PONGO LO DE CARGA ESTANDAR? meto otro string tipo y que dependiendo de la carga que metas ese string
        //TODO: ponga una cosa u otra (carga toxica, carga estandar etc)??? SOLUCIONADO???

        std::string frase = this->nombre + " [" + std::to_string(this->volumen)
                            + " m3] [" + std::to_string(this->peso) + " kg]";

        if(!this->elementos.empty()){
            frase = frase + " de " + this->elementos[0]->getTipo() + "\n";
        } else{
            frase = frase + " vacio\n";
        }

        for(T* a :  this->elementos){  //Devuelve el toString de cada uno de los elementos guardados
            frase = frase + "    " + a->to_string() + "\n"; //TODO: devuelve el toString de carga
        }

        return frase;

    }
};