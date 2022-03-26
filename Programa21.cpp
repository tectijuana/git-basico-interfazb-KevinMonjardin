//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 05, Capítulo 5.
Escribir un programa que simule arrojar un dado 60 veces. Contar e imprimir el 
número de veces que sale cada dado.
*/

//Autor    KevinMonjardin
//Fecha    23-03-2022

int main () 
{
    int ale, liminf=1, limsup=6, c=0, c2=0, c3=0, c4=0, c5=0, c6=0;
    srand(time(NULL));
    for (int i = 1; i <= 60; i ++)
   {
       ale = liminf+rand()%(limsup+1-liminf);
       if(ale==1){c++;}
       else if(ale==2){c2++;}
       else if(ale==3){c3++;}
       else if(ale==4){c4++;}
       else if(ale==5){c5++;}
       else if(ale==6){c6++;}
   }
    cout<<"Veces que sali\242 cada una de las caras:\nCaras:\tVeces:"
    <<"\n1:\t"<<c<<"\n2:\t"<<c2<<"\n3:\t"<<c3<<"\n4:\t"<<c4<<"\n5:\t"<<c5<<"\n6:\t"<<c6;
    return 0;
}