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
    Contenedor(double volumen_) : Carga("Contenedor", volumen_, 0), Almacen<T>(volumen_){}; //toDo: Error si introduce volumen 0 quitado por almacen


    bool guardar(T& elemento) override {

        if(this->capacidad >= elemento.getVolumen()){     //Si tiene espacio en el contenedor
            this->elementos.push_back(&elemento);       //lo guarda al final, como una cola
            this->capacidad -= elemento.getVolumen();    //se reduce la capacidad de cosas que puede meter
            this->peso += elemento.getPeso();
            this->volumen += elemento.getVolumen();
            return true;
        } else{
            return false;
        }
    }

    std::string to_string() const override {
        //TODO: COMO PONGO LO DE CARGA ESTANDAR? meto otro string tipo y que dependiendo de la carga que metas ese string
        //TODO: ponga una cosa u otra (carga toxica, carga estandar etc)???

        std::string frase = this->nombre + " [" + std::to_string(this->capacidad)
                            + " m3] [" + std::to_string(this->peso ) + " kg] \n";


        for(T* a :  this->elementos){  //Devuelve el toString de cada uno de los elementos guardados
            frase = frase + "   " + a->to_string() + "\n"; //TODO: devuelve el toString de carga
        }

        return frase;

    }
};