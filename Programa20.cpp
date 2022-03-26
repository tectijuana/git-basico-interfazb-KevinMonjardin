//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 97, Capítulo 3.
Un cilindro tiene 1.1 m de largo y el radio de su base es de 7 cm. 
Cual es su volumen a) en cm cúbicos y b) en m cubicos?
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    float largo=110, r=7, vol, vol2;
    vol=(M_PI*pow(r,2))*largo;
    vol2=vol/1000000;
    cout<<"a) El volumen del cilindro en cm c\243bicos es: "<<vol
    <<"\nb) El volumen del cilindro en metros c\243bicos es: "<<vol2;
    return 0;
}