//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 76, Capítulo 3.
Calcular el volumen de un "trompo" para valores de entrada de r, a y b.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    float r, a, b, vol;
    cout<<"Ingrese el radio de la base: ";
    cin>>r;
    cout<<"Ingrese la altura del cilindro: ";
    cin>>a;
    cout<<"Ingrese la altura de la punta del trompo: ";
    cin>>b;
    vol=((M_PI*pow(r,2))*a)+((M_PI*pow(r,2)*b)/3);
    cout<<"El volumen del trompo es: "<<vol<<" unidades c\243bicas";
    return 0;
}