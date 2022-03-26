//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 19, Capítulo 3.
Introducir las longitudes de los tres lados de un triángulo. Encontrar el perímetro
*/

//Autor    KevinMonjardin
//Fecha    24-03-2022

int main () 
{
    float A, B, C, per;
    cout <<"Ingrese el lado A: ";
    cin>>A;
    cout <<"Ingrese el lado B: ";
    cin>>B;
    cout <<"Ingrese el lado C: ";
    cin>>C;
    per=A+B+C;
    cout<<"El per\241metro es: "<< per;
    return 0;
}