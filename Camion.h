//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "Almacen.h"

template <typename T>
class Camion : public Almacen<T> {
private:
    double volumen;
    double peso;
    std::string nombre;

    //std::vector<Carga> elementos;
public:
    //Camion(double capacidad) : Almacen<T>(capacidad){}; //todo: Preguntar
    Camion(double capacidad) : Almacen<T>(capacidad){};

    bool guardar(T& elemento){
        if(this->capacidad >= elemento.getVolumen()){     //Si tiene espacio en el contenedor
            this->elementos.push_back(&elemento);       //lo guarda al final, como una cola
            this->capacidad -= elemento.getVolumen();    //se reduce la capacidad de cosas que puede meter
            this->peso += elemento.getPeso();
            this->volumen += elemento.getVolumen();
            return true;
        } else{
            return false;
        }
    };

    std::string getNombre() const {
        return nombre;
    }

    double getPeso() const {
        return peso;
    }

    double getVolumen() const {
        return volumen;
    }

};



