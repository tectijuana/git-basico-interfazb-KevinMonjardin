//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 74, Capítulo 3.
Introducir la longitud L, la anchura W y la altura H de un prisma rectangular. 
Calcular el volumen y el área superficial total del prisma.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    float L, W, H, vol, area;
    cout<<"Ingrese la longitud: ";
    cin>>L;
    cout<<"Ingrese la anchura: ";
    cin>>W;
    cout<<"Ingrese la altura: ";
    cin>>H;
    vol=L*W*H;
    area=2*((L*W)+(W*H)+(H*L));
    cout<<"El volumen del prisma rectangular es: "<<vol
    <<" unidades c\243bicas, y el \240rea es: "
    <<area<<" unidades cuadradas.";
    return 0;
}