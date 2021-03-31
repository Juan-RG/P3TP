//
// Created by Juan on 21/03/2021.
//

#pragma once

#include <string>
#include "Objeto.h"

class Carga : public Objeto {
protected:                                          //TODO: si no lo pongo protected, en contenedor no puedo modificar
  /*                                                  //TODO: su valor al añadir una nueva carga
    double volumen;
    double peso;
    std::string nombre;                             //Mejor poner nombre aqui porque toda carga tiene un nombre no?
*/
public:
    Carga(const std::string nombre, double  volumen_, double peso_);          //TODO: Hay alguna otra forma de hacer esto?
/*    virtual double getPeso() const;                         //Tanto vol como peso en todas clases devuelven lo mismo
    virtual double getVolumen() const;
    virtual std::string getNombre() const;                  //TODO: Igual esto hay que definirlo en esta clase y pasar nombre al constructor
    virtual std::string to_string() const = 0;      //Igual incluso esta puede ser definida aqui, pero no estoy seguro, ya lo veremos
*/
 };



