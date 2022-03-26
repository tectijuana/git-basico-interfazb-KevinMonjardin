//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 73, Capítulo 3.
Calcular el volumen y área de una esfera con las fórmulas V=(pi)r^3/3 y A=(pi)r^2, 
donde r es el radio de la esfera. En este problema, r=10 cm.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    float r=10, vol, area;
    vol=(4/3)*M_PI*pow(r,3);
    area=4*M_PI*pow(r,2);
    cout<<"El volumen de la esfera es: "<<vol<<" cm c\243bicos, y el \240rea es: "
    <<area<<" cm cuadrados.";
    return 0;
}