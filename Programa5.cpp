//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 25, Capítulo 3.
Introducir B, la base y H, la altura de un triángulo y 
determinar el área.
*/

//Autor    KevinMonjardin
//Fecha    21-03-2022

int main () 
{
    float B, H, area;
    cout <<"Ingrese la base del tri\240ngulo: ";
    cin>>B;
    cout <<"Ingrese la altura: ";
    cin>>H;
    area=(B*H)/2;
    cout<<"El \240rea del tri\240ngulo es: "<< area;
    return 0;
}