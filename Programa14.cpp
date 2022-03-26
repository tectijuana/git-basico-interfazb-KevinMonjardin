//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 10, Capítulo 4.
Correr un programa que saque en forma de columna el seno, coseno y tangente de x, 
donde x está en grados. Introducir el ángulo A de partida, el incremento 1 y el ángulo final B.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main () 
{
    int a1, a2, longitud;
    cout<<"Ingrese un valor para el \240ngulo de partida: ";
    cin>>a1;
    cout<<"Ingrese un valor para el \240ngulo de final: ";
    cin>>a2;
    longitud=a2-a1;
    float seno[longitud+1], coseno[longitud+1],tange[longitud+1], angulos[longitud+1];
    angulos[longitud]=a2;
    //Coloqué el incremento de uno de manera directa
    for(int i=0;i<longitud+1;i++)
    {
        angulos[i]=a1;
        a1++;
    }
    
    for(int i=0;i<longitud+1;i++)
    {
        seno[i]=sin((angulos[i]*M_PI)/180);
        coseno[i]=cos((angulos[i]*M_PI)/180);
        tange[i]=tan((angulos[i]*M_PI)/180);
    }
    cout<<"\nLos valores son los siguientes:\nGrados\tSeno\t\tCoseno\t\tTangente\n";
    for(int i=0;i<longitud+1;i++)
    {
        cout<<angulos[i]<<"\t"<<seno[i]<<"\t"<<coseno[i]<<"\t"<<tange[i]<<"\n";
    }
    return 0;
}