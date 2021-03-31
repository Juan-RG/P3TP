cmake_minimum_required(VERSION 3.17)
project(p3)

set(CMAKE_CXX_STANDARD 20)

add_executable(p3 main.cpp Carga.cpp Carga.h Producto.cpp Producto.h Toxico.cpp Toxico.h SerVivo.cpp SerVivo.h Contenedor.h Almacen.h Camion.h Objeto.cpp Objeto.h)