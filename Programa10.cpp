//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 01, Capítulo 4.
Pasar de grados a radianes, usando múltiplos de 10 grados, 
desde 0 grados hasta 360 grados.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    float grad[40], rad[40];
    for (int i = 0; i < 37; i++)
    {
        grad[i]=(i)*10; 
    }
    for (int i = 0; i < 37; i++)
    {
        rad[i]=(grad[i]*M_PI)/180;
    }
    cout<<"Los grados transformados a radianes son:\n";
    for (int i = 0; i < 37; i++)
    {
        cout<<grad[i]<<" grados: "<<rad[i]<<" radianes\n";
    }
    return 0;
}