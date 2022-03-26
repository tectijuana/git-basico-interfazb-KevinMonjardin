//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 28, Capítulo 3.
Introducir X, la longitud de un lado de un triángulo 
equilátero y calcular su perímetro.
*/

//Autor    KevinMonjardin
//Fecha    21-03-2022

int main () 
{
    float X, per;
    cout<<"Ingrese la longitud de los lados del tri\240ngulo: ";
    cin>>X;
    per=X*3;
    cout<<"Su per\241metro es: "<< per;
    return 0;
}