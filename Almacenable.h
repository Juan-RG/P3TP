//
// Created by Juan on 21/03/2021.
//

#pragma once


#include <vector>
#include "Carga.h"

class Almacenable {
private:
    double capacidad;

    std::vector<Carga> elementos;

public:
    bool guardar(Carga elemento);

};


