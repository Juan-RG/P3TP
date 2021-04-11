//
// Created by Juan on 21/03/2021.
//

#pragma once

#include <iostream>
#include "Carga.h"
#include "Almacen.h"
#include <typeinfo>

template <typename T>
class Contenedor : public Carga, public Almacen<T> {

public:
    Contenedor(double capacidad) : Carga("Contenedor", capacidad, 0), Almacen<T>(capacidad){};

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
        std::string frase = this->nombre + " [" + std::to_string(this->volumen)
                            + " m3] [" + std::to_string(this->peso) + " kg]";

        if(!this->elementos.empty()){
            frase = frase + " de " + this->elementos[0]->getTipo() + "\n";
        } else{
            frase = frase + " vacio\n";
        }

        for(T* elemento :  this->elementos){  //Devuelve el toString de cada uno de los elementos guardados
            frase = frase + "    " + elemento->to_string() + "\n";
        }

        return frase;

    }
};