//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 02, Capítulo 4.
Introducir la medida en grados de un ángulo y calcular la medida en radianes.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    float grad, rad;
    cout <<"Ingrese el \240ngulo en grados: ";
    cin>>grad;
    rad=(grad*M_PI)/180;
    cout<<grad<<"Los grados transformados a radianes son: "<<rad<<" radianes\n";
    return 0;
}