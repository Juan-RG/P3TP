//
// Created by Juan on 21/03/2021.
//

#pragma once

#include <string>

class Carga {
private:
    double volumen;
    double peso;
    std::string nombre;                             //Mejor poner nombre aqui porque toda carga tiene un nombre no?

public:
    Carga(const std::string &nombre_, double  volumen_, double peso_);          //TODO: Hay alguna otra forma de hacer esto?
    double getPeso() const;                         //Tanto vol como peso en todas clases devuelven lo mismo
    double getVolumen() const;
    std::string getNombre() const;                  //TODO: Igual esto hay que definirlo en esta clase y pasar nombre al constructor
    virtual std::string to_string() const;      //Igual incluso esta puede ser definida aqui, pero no estoy seguro, ya lo veremos
};



