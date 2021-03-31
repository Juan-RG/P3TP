//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "Almacen.h"


class Camion : public Almacen<Carga>, Objeto {
private:
    //double volumen;
    //double peso;
    //std::string nombre;

public:
    //Camion(double capacidad) : Almacen<T>(capacidad){}; //todo: Preguntar
    Camion(double capacidad) : Objeto("Camion", capacidad, 0), Almacen<Carga>(capacidad){};

    bool guardar(Carga& elemento) {
        if(this->capacidad >= elemento.getVolumen()){      //Si tiene espacio en el contenedor
            Almacen<Carga>::guardar(elemento); //se reduce la capacidad de cosas que puede meter
            this->peso += elemento.getPeso();
           // this->volumen -= elemento.getVolumen();
            return true;
        } else{
            return false;
        }
    }
/*
    bool guardar(Carga& elemento){
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
*/
/*
    std::string getNombre() const {
        return nombre;
    }

    double getPeso() const {
        return peso;
    }

    double getVolumen() const {
        return volumen;
    }
*/
    std::string to_string() const {
        return nombre + " " + std::to_string(capacidad) + " " + std::to_string(volumen);
    }

    friend std::ostream& operator<<(std::ostream& os, const Camion& dt);

};

std::ostream& operator<<(std::ostream& os, const Camion& ca)
{
    os << ca.nombre + " [" + std::to_string(ca.volumen)
                        + " m3] [" + std::to_string(ca.peso ) + " kg] \n";


    for(Carga* a :  ca.elementos){  //Devuelve el toString de cada uno de los elementos guardados
        os << "   " + a->to_string() + "\n"; //TODO: devuelve el toString de carga
    }
    return os;
}


