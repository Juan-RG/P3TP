
#include "Producto.h"
#include <cfenv>
Producto::Producto(const std::string &nombre_, double volumen_, double peso_) : Carga(nombre_, volumen_, peso_){ }

std::string Producto::to_string() const {
    return  Carga::getNombre() + " [" + std::to_string(Carga::getVolumen())
            + " m3] [" + std::to_string(Carga::getPeso()) + " kg]";
}
