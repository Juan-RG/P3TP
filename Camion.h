
#pragma once

#include "Almacen.h"


class Camion : public Almacen<Carga>, Objeto {
public:
    Camion(double capacidad) : Objeto("Camion", capacidad, 0), Almacen<Carga>(capacidad){};

    bool guardar(Carga& elemento) {
        if(this->capacidad >= elemento.getVolumen()){      //Si tiene espacio en el contenedor
            Almacen<Carga>::guardar(elemento);          //se reduce la capacidad de cosas que puede meter
            this->peso += elemento.getPeso();
            return true;
        } else{
            return false;
        }
    }

    std::string to_string() const {
        return this->nombre + " [" + std::to_string(this->volumen) + " m3] [" + std::to_string(this->peso) + " kg]\n";
    }

    friend std::ostream& operator<<(std::ostream& os, const Camion& ca);

};

std::ostream& operator<<(std::ostream& os, const Camion& camion)
{
    os << camion.nombre + " [" + std::to_string(camion.volumen) + " m3] [" + std::to_string(camion.peso) + " kg]\n";

    for(Carga* carga :  camion.elementos){              //Devuelve el toString de cada uno de los elementos guardados
        os << "  " + carga->to_string();           //TODO: devuelve el toString de carga
    }
    return os;
}


