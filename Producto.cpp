//
// Created by Juan on 21/03/2021.
//

#include "Producto.h"

Producto::Producto(const std::string &nombre_, double volumen_, double peso_)
: Carga(nombre_, volumen_, peso_){ }

/*std::string Producto::getNombre() const {
    return nombre;
}*/

std::string Producto::to_string() const {   //REVISAR
    //Longaniza de Graus [0.5 m3] [0.8 kg] UN EJEMPLO
    return Carga::getNombre() + " [" + std::to_string(volumen) + " m3] [" + std::to_string(peso) + " kg]";
}
