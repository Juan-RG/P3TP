//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "Carga.h"
#include "Almacen.h"

template <typename T>
class Contenedor : public Carga, public Almacen<T> {

public:
    Contenedor(double volumen_);
    //std::string getNombre() const override;
    std::string to_string() const override;
};