//
// Created by Juan on 31/03/2021.
//

#pragma once


#include <string>

class Objeto {

protected:
    double volumen;
    double peso;
    std::string nombre;

public:
    Objeto(const std::string nombre, double  volumen_, double peso_);
    virtual double getPeso() const;                         //Tanto vol como peso en todas clases devuelven lo mismo
    virtual double getVolumen() const;
    virtual std::string getNombre() const;                  //TODO: Igual esto hay que definirlo en esta clase y pasar nombre al constructor
    virtual std::string to_string() const = 0;      //Igual incluso esta puede ser definida aqui, pero no estoy seguro, ya lo veremos

};



