//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "Almacenable.h"

class Camion: Almacenable {

public:
    Camion(double capacidad);
    std::string to_string();
    std::string nombre();
    double volumen();
    double peso();
};



