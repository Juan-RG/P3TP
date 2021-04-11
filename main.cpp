#include "Carga.h"
#include "Contenedor.h"
#include "Toxico.h"
#include "SerVivo.h"
#include "Producto.h"
#include <iostream>
#include "Camion.h"


void test_contenedor_lleno();

void test_camion_lleno();

void test_contenedor_vacio();

void test_toString_Producto();

void test_toString_Contenedor_Camion();

void test_contenedores_especiales();

void test_comprobar_guardar();

using namespace std;

int main(int argc, char** argv)
{
    test_camion_lleno();
    test_contenedor_lleno();
    test_contenedor_vacio();

    test_toString_Producto();
    test_toString_Contenedor_Camion();

    test_contenedores_especiales();
    test_comprobar_guardar();

    Contenedor<Carga>	contenedor_estandar(4);
    Contenedor<Toxico>	contenedor_toxico(3);
    Contenedor<SerVivo>	contenedor_servivo(2);

    Producto longaniza_graus("Longaniza de Graus",0.5,0.8);
    contenedor_estandar.guardar(longaniza_graus);
    Producto adoquines_zaragoza("Adoquines de Zaragoza",0.1,5.0);
    contenedor_estandar.guardar(adoquines_zaragoza);

    Toxico discos_melendi("Discos de Melendi",1,10);
    // Esto no deberia compilar
    //contenedor_estandar.guardar(discos_melendi);
    contenedor_toxico.guardar(discos_melendi);

    Camion camion(10);

    SerVivo elvis_presley("Elvis Presley",0.1,100);
    // Esto no deberia compilar
    // camion.guardar(elvis_presley);
    contenedor_servivo.guardar(elvis_presley);

    if (!camion.guardar(contenedor_estandar))
        cout << "Camion lleno con contenedor estandar" << endl;
    if (!camion.guardar(contenedor_toxico))
        cout << "Camion lleno con contenedor toxico" << endl;
    if (!camion.guardar(contenedor_servivo))
        cout << "Camion lleno con contenedor de seres vivos" << endl;

    Producto apuntes_tepro("Apuntes de Tecnologia de Programacion",1,0.1);
    if (!camion.guardar(apuntes_tepro))
        cout << "Camion lleno con apuntes de tepro" << endl;

    Producto trenzas_almudevar("Trenzas de Almudevar",0.5,0.8);
    if (!camion.guardar(trenzas_almudevar))
        cout << "Camion lleno con Trenzas de Almudevar" << endl;

    cout << endl;
    cout << camion << endl;

/*
La salida del programa hasta aquí deberia ser parecida a lo siguiente:

> ./main
Camion lleno con Trenzas de Almudevar

Camion [10 m3] [115.9 kg]
  Contenedor [4 m3] [5.8 kg] de Carga Estandar
    Longaniza de Graus [0.5 m3] [0.8 kg]
    Adoquines de Zaragoza [0.1 m3] [5 kg]
  Contenedor [3 m3] [10 kg] de Productos Toxicos
    Discos de Melendi [1 m3] [10 kg]
  Contenedor [2 m3] [100 kg] de Seres Vivos
    Elvis Presley [0.1 m3] [100 kg]
  Apuntes de Tecnologia de Programacion [1 m3] [0.1 kg]

*/

    Contenedor<Carga>	otro_contenedor_estandar(1);
    Contenedor<Toxico>	otro_contenedor_toxico(1);
    Contenedor<SerVivo>	otro_contenedor_servivo(1);
    contenedor_estandar.guardar(otro_contenedor_estandar);
    contenedor_estandar.guardar(otro_contenedor_toxico);
    contenedor_estandar.guardar(otro_contenedor_servivo);
    // Estas lineas no deberian compilar
    //contenedor_estandar.guardar(camion);
    //contenedor_toxico.guardar(otro_contenedor_toxico);
    //contenedor_servivo.guardar(otro_contenedor_servivo);
}

void test_comprobar_guardar() {
    Contenedor<Carga>	contenedor_estandar(4);
    Producto plastico("Plastico",1,1);
    Camion ford(10);
    contenedor_estandar.guardar(plastico);

    if (contenedor_estandar.getSize() != 1){
        cerr << "error guardar producto no introducido \n";
    }
    ford.guardar(contenedor_estandar);
    if (ford.getSize() != 1){
        cerr << "error guardar contenedor en camion \n";
    }
    Camion mercedes(3);
    mercedes.guardar(plastico);
    if (mercedes.getSize() != 1){
        cerr << "error guardar producto en camion \n";
    }
    Contenedor<Toxico> contenedor_radiacion(4);

    Toxico radiacion("Radiacion",1,1);

    contenedor_radiacion.guardar(radiacion);

    if (contenedor_radiacion.getSize() != 1){
        cerr << "error guardar toxico en contenedor \n";
    }
    Camion hyundayi(5);

    hyundayi.guardar(contenedor_radiacion);
    if (hyundayi.getSize() != 1){
        cerr << "error guardar contenedor toxico en camion \n";
    }
    /* error de compilacion
    hyundayi.guardar(radiacion);
    */
}

void test_contenedores_especiales() {
    Contenedor<Carga>	contenedor_estandar(4);
    Contenedor<Toxico>	contenedor_toxico(3);
    Contenedor<SerVivo>	contenedor_servivo(2);

    Contenedor<Carga>	otro_contenedor_estandar(1);
    Contenedor<Toxico>	otro_contenedor_toxico(1);
    Contenedor<SerVivo>	otro_contenedor_servivo(1);
    contenedor_estandar.guardar(otro_contenedor_estandar);
    contenedor_estandar.guardar(otro_contenedor_toxico);
    contenedor_estandar.guardar(otro_contenedor_servivo);

    Camion camion(10);
    /*
    // Estas lineas no deberian compilar
    contenedor_estandar.guardar(camion);
    contenedor_toxico.guardar(otro_contenedor_toxico);
    contenedor_servivo.guardar(otro_contenedor_servivo);
    SerVivo elvis_presley("Elvis Presley",0.1,100);
    contenedor_toxico.guardar(elvis_presley);
    contenedor_estandar.guardar(elvis_presley);
    Toxico uranio("Elvis Presley",0.1,100);
    contenedor_servivo.guardar(uranio);
    contenedor_estandar.guardar(uranio);
*/
     }


void test_camion_lleno() {
    Camion	camion1(4);
    Contenedor<Carga>	contenedor2(4);
    camion1.guardar(contenedor2);

    Contenedor<Carga>	contenedor3(3);
    bool introducido = camion1.guardar(contenedor3);
    if (introducido){
        cerr << "Test_camion_lleno_ FALLIDO";
    }
}

void test_contenedor_lleno() {
    Contenedor<Carga>	contenedor1(4);
    Contenedor<Carga>	contenedor2(4);
    contenedor1.guardar(contenedor2);

    Contenedor<Carga>	contenedor3(3);
    bool introducido = contenedor1.guardar(contenedor3);
    if (introducido){
        cerr << "Test_contenedor_lleno_ FALLIDO";
    }
}

void test_contenedor_vacio(){
    Contenedor<Carga> contenedor_estandar(4);
    Contenedor<Toxico>	contenedor_toxico(3);
    Contenedor<SerVivo>	contenedor_servivo(2);

    if (contenedor_estandar.getPeso() != 0){
        cerr << "Test_contenedor_vacio FALLIDO";
    } else if(contenedor_toxico.getPeso() != 0){
        cerr << "Test_contenedor_vacio FALLIDO";
    } else if(contenedor_servivo.getPeso() != 0){
        cerr << "Test_contenedor_vacio FALLIDO";
    }
}

void test_toString_Producto(){
    Producto adoquines_zaragoza("Adoquines Madrid",0.5,5.0);
    Toxico discos_melendi("Discos de pop",2,10);
    SerVivo elvis_presley("Elvis Presley",0.3,100);

    if (adoquines_zaragoza.to_string() != "Adoquines Madrid [0.500000 m3] [5.000000 kg]"){
        cerr << "test_toString_Producto FALLIDO";
    } else if(discos_melendi.to_string() != "Discos de pop [2.000000 m3] [10.000000 kg]"){
        cerr << "test_toString_Producto FALLIDO";
    } else if(elvis_presley.to_string() != "Elvis Presley [0.300000 m3] [100.000000 kg]"){
        cerr << "test_toString_Producto FALLIDO";
    }
}

void test_toString_Contenedor_Camion(){
    Contenedor<Carga> contenedor_estandar(4);
    Contenedor<Toxico>	contenedor_toxico(3);
    Contenedor<SerVivo>	contenedor_servivo(3);

    if (contenedor_estandar.to_string() != "Contenedor [4.000000 m3] [0.000000 kg] vacio\n"){
        cerr << "test_toString_Contenedor FALLIDO";
    } else if(contenedor_toxico.to_string() != "Contenedor [3.000000 m3] [0.000000 kg] vacio\n"){
        cerr << "test_toString_Contenedor FALLIDO";
    } else if(contenedor_servivo.to_string() != "Contenedor [3.000000 m3] [0.000000 kg] vacio\n"){
        cerr << "test_toString_Contenedor FALLIDO";
    }

    Producto ladrillos_aragoneses("Ladrillos aragoneses",0.5,6.6);
    Toxico ropa_sucia("Ropa sucia",3,5);
    SerVivo el_Rey("El rey",0.3,100);

    contenedor_estandar.guardar(ladrillos_aragoneses);
    contenedor_toxico.guardar(ropa_sucia);
    contenedor_servivo.guardar(el_Rey);

    if (contenedor_estandar.to_string() != "Contenedor [4.000000 m3] [6.600000 kg] de Carga estandar\n"
                                           "    Ladrillos aragoneses [0.500000 m3] [6.600000 kg]\n"){
        cerr << "test_toString_Contenedor FALLIDO";
    } else if(contenedor_toxico.to_string() != "Contenedor [3.000000 m3] [5.000000 kg] de Productos Toxicos\n"
                                               "    Ropa sucia [3.000000 m3] [5.000000 kg]\n"){
        cerr << "test_toString_Contenedor FALLIDO";
    } else if(contenedor_servivo.to_string() != "Contenedor [3.000000 m3] [100.000000 kg] de Seres Vivos\n"
                                                "    El rey [0.300000 m3] [100.000000 kg]\n"){
        cerr << "test_toString_Contenedor FALLIDO";
    }

    Camion camion(20);
    camion.guardar(contenedor_estandar);

    if (camion.to_string() != "Camion [20.000000 m3] [6.600000 kg]\n"){
        cerr << "test_toString_Camion FALLIDO";
    }
}