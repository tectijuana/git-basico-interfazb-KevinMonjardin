//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 61, Capítulo 3.
Calcular el área superficial de un cilindro con la fórmula: S=2(pi)((r^2)+h).
*/

//Autor    KevinMonjardin
//Fecha    24-03-2022

int main () 
{
    float r, h, S;
    cout <<"Ingrese el radio de la base del cilindro: ";
    cin>>r;
    cout <<"Ingrese la altura: ";
    cin>>h;
    S=2*M_PI*(pow(r,2)+h);
    cout<<"El \240rea superficial del cilindro es: "<<S;
    return 0;
}
    
