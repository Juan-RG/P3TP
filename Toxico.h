//
// Created by Juan on 21/03/2021.
//

#pragma once

#include "CargaEspecial.h"

class Toxico : protected CargaEspecial {
public:
    Toxico(std::string nombre_, double  volumen_, double peso_): CargaEspecial(nombre_, volumen_, peso_) {};

};



