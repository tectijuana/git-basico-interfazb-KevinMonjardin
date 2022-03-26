//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 26, Capítulo 3.
Snoopy, un gigante de otro planeta ha decidido invadir la Tierra y regresar luego 
a su propio planeta, Durante su visita, prefiere ocultar su identidad portando una 
máscara que le cubre la nariz y la boca. La máscara debe tener una altura (h) de 6.4 m 
y una base (b) de 14.3 m. Con la ecuación AREA=1/2bh, escribir un programa para determinar 
los metros cuadrados que necesitará el gigante.
*/

//Autor    KevinMonjardin
//Fecha    21-03-2022

int main () 
{
    float B=14.3, H=6.4, area;
    area=0.5*(B*H);
    cout<<"Los metros cuadrados que necesitar\240 el gigante son: "<< area;
    return 0;
}