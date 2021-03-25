//
// Created by Juan on 21/03/2021.
//

#pragma once

#include <vector>
#include "Carga.h"

class Almacen { //hace falta template?????? CREO QUE NO
private:
    double capacidad;               //TODO:Constructor para meter capacidad de cada camion/contenedor?
                                    //TODO:que sera capacidad(volumen)????
    std::vector<Carga> elementos;

public:
    Almacen(double volumen_);
    bool guardar(Carga elemento);

};


