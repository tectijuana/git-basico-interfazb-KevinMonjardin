//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 92, Capítulo 3.
El radio de la Tierra es de alrededor de 7,400 km. 
Calcular la circunferencia de la Tierra.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    float r=7400, circ;
    circ=2*(M_PI*r);
    cout<<"La circunferencia de la tierra es: "<<circ<<" kil\242metros";
    return 0;
}