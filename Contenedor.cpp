//
// Created by Juan on 21/03/2021.
//

#include "Contenedor.h"

template <typename T>
Contenedor<T>::Contenedor(double volumen_) : Almacen<T>(volumen_) { }

/*std::string Contenedor<Carga>::getNombre() const {
    return ;
}*/ //TODO: no hace falta porque el nombre lo tiene carga??

template <typename T>
std::string Contenedor<T>::to_string() const {
    //TODO: COMO PONGO LO DE CARGA ESTANDAR? meto otro string tipo y que dependiendo de la carga que metas ese string
    //TODO: ponga una cosa u otra (carga toxica, carga estandar etc)???
    //Contenedor [4 m3] [5.8 kg] de Carga Estandar
    //  Longaniza de Graus [0.5 m3] [0.8 kg]
    //  Adoquines de Zaragoza [0.1 m3] [5 kg] //EJEMPLO
    std::string frase = Carga::getNombre() + " [" + std::to_string(Carga::getVolumen())
                        + " m3] [" + std::to_string(Carga::getPeso() ) + " kg]\n";

    for(T a : Almacen<T>::elementos){  //Devuelve el toString de cada uno de los elementos guardados
        frase = "   " + frase + a.to_string() + "\n"; //TODO: esto funciona??? XD
    }

    return frase;
}