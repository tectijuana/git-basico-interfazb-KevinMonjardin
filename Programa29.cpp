//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 59, Capítulo 3.
Calcular e imprimir el volumen de un cilindro de radio r y altura h. 
En este problema, r=10 cm y h=32 cm. Usar la fórmula: V=(pi)(r^2)(h)
*/

//Autor    KevinMonjardin
//Fecha    24-03-2022

int main () 
{
    float r=10, h=32, vol;
    vol=M_PI*pow(r,2)*h;
    cout<<"El volumen del cilindro es: "<<vol<<" cm c\243bicos.";
    return 0;
}