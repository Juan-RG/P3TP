//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "Carga.h"
#include "Almacen.h"

template <>
class Contenedor<Carga> : Carga, Almacen { //ESTO SE PUEDE????
/*template <typename T>
class Contenedor: Carga, Almacen {*/

public:
    Contenedor(double volumen);
    //std::string getNombre() const override;
    std::string to_string() const override;
};
