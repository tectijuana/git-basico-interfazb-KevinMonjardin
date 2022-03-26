//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 03, Capítulo 4.
Introducir la medida en radianes de un ángulo y calcular la medida en grados.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    float grad, rad;
    cout <<"Ingrese el \240ngulo en radianes: ";
    cin>>rad;
    grad=(rad*180)/M_PI;
    cout<<rad<<"Los radianes transformados a grados son: "<<grad<<" grados\n";
    return 0;
}