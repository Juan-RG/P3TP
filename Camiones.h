//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "Almacenable.h"

class Camiones: Almacenable {

public:
    Camiones(double capacidad);
    std::string to_string();
    std::string nombre();
    double volumen();
    double peso();
};



