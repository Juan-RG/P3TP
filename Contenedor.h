//
// Created by Juan on 21/03/2021.
//

#ifndef P3_CONTENEDOR_H
#define P3_CONTENEDOR_H


#include "Carga.h"
#include "Almacenable.h"

class Contenedor: Carga, Almacenable {

public:
    Contenedor(double volumen);
};


#endif //P3_CONTENEDOR_H
