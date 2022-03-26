//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 08, Capítulo 5.
Escribir un programa para simular el tiro de dos dados 1000 veces y sacar el 
número de sietes y el de onces. ¿Son los resultados razonablemente cercanos 
a lo que se podía esperarse?
*/

//Autor    KevinMonjardin
//Fecha    23-03-2022

int main () 
{
    int ale, ale2, liminf=1, limsup=6, c=0, c2=0;
    srand(time(NULL));
    for (int i = 1; i <= 1000; i ++)
   {
       ale = liminf+rand()%(limsup+1-liminf);
       ale2 = liminf+rand()%(limsup+1-liminf);
       if((ale+ale2)==7){c++;}
       else if((ale+ale2)==11){c2++;}
   }
    cout<<"Veces que sali\242 cada una de las caras:\nCaras:\tVeces:"
    <<"\n7\t"<<c<<"\n11\t"<<c2;
    cout<<"\nLos resultados si son cercanos a lo esperado, pues para ser once solo hay dos numeros que se pueden sumar, mientras que para siete hay mas variedad.";
    return 0;
}