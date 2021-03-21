//
// Created by Juan on 21/03/2021.
//



#pragma once

#include <string>

class Carga {
private:
    double volumen;
    double peso;
public:
    virtual double getPeso();
    virtual double getVolumen();
    std::string nombre();
    std::string to_string();

};



