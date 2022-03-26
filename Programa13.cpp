//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 08, Capítulo 4.
Encontrar el valor de sen x y cos x para x=30 grados, 45 grados,
60 grados, 90 grados.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    int x[4]={30,45,60,90};
    float seno[5], coseno[5];
    for(int i=0;i<4;i++)
    {
        seno[i]=sin((x[i]*M_PI)/180);
        coseno[i]=cos((x[i]*M_PI)/180);
    }
    cout<<"Los valores de seno y coseno son los siguientes:\n";
    for(int i=0;i<4;i++)
    {
        cout<<"Seno de "<<x[i]<<" grados: "<<seno[i];
        cout<<"\nCoseno de "<<x[i]<<" grados: "<<coseno[i]<<"\n\n";
    }
    return 0;
}