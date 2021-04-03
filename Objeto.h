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
    virtual double getPeso() const;
    virtual double getVolumen() const;
    virtual std::string getNombre() const;
    virtual std::string to_string() const = 0;

};



