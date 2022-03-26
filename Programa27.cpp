//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 51, Capítulo 3.
Calcular e imprimir el área y el perímetro de un paralelogramo con valores de entrada
c=8, d=4.2 y h=4 m.
*/

//Autor    KevinMonjardin
//Fecha    24-03-2022

int main () 
{
    float h=4, c=8, d=4.2, area, per;
    area=c*h;
    per=2*(c+d);
    cout<<"El \240rea del paralelogramo es: "<<area<<"\nSu per\241metro es: "<<per;
    return 0;
}