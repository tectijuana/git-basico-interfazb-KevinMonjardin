//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 48, Capítulo 3.
Una mesa mide 2.31 m. Si vas a seccionarse en cuatro tramos de igual longitud, ¿cuántos 
centímetros tendrá cada una? Si va a cortarse por la mitad, ¿cuántos 
centímetros habrá del centro a cada extremo?.
*/

//Autor    KevinMonjardin
//Fecha    21-03-2022

int main () 
{
    float mesa=2.31, res, res2;
    res=mesa/4;
    res2=mesa/2;
    cout<<"Si la mesa se divide en cuatro, cada tramo tendr\240 como valor: "<<res*100<<
    "cm.\nSi se divide en dos, cada tramo tendr\240 como valor: "<<res2*100<<"cm.";
    return 0;
}