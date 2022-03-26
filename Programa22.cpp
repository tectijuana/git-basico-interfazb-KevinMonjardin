//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 06, Capítulo 5.
Simular 1000 tiradas de un dado. No imprimir el resultado de cada tirada.
Al final de la simulación, imprimir la cantidad de cuatros que salieron.
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
       if(ale==4){c++;}
   }
    cout<<"Veces que sali\242 el n\243mero 4: "<<c;
    return 0;
}