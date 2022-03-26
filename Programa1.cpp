//Librerías
#include <iostream>
using namespace std;

/*
Ejercicio 8, Capítulo 3.
Encontrar el área de cualquier rectángulo con la fórmula Área=lw, 
donde l es la longitud y w es el ancho.
*/

//Autor    KevinMonjardin
//Fecha    21-03-2022

int main () 
{
    float l, w, area;
    cout <<"Ingrese la longitud del rect\240ngulo: ";
    cin>>l;
    cout <<"Ingrese el ancho: ";
    cin>>w;
    area=l*w;
    cout<<"El \240rea del rect\240ngulo es: "<< area;
    return 0;
}