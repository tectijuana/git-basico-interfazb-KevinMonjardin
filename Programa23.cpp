//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 07, Capítulo 5.
Tirar un dado 1000 veces. Contar el número de veces que sale el 3.
*/

//Autor    KevinMonjardin
//Fecha    23-03-2022

int main () 
{
    int ale, liminf=1, limsup=6, c=0;
    srand(time(NULL));
    for (int i = 1; i <= 1000; i ++)
   {
       ale = liminf+rand()%(limsup+1-liminf);
       if(ale==3){c++;}
   }
    cout<<"Veces que sali\242 el n\243mero 3: "<<c;
    return 0;
}