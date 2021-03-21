cmake_minimum_required(VERSION 3.17)
project(p3)

set(CMAKE_CXX_STANDARD 20)

add_executable(p3 main.cpp Carga.cpp Carga.h Producto.cpp Producto.h ProductoToxicos.cpp ProductoToxicos.h SeresVivos.cpp SeresVivos.h Contenedor.cpp Contenedor.h Almacenable.cpp Almacenable.h Camiones.cpp Camiones.h ContenedorEspecial.cpp ContenedorEspecial.h)