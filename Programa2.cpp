//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 9, Capítulo 3.
Encontrar el tercer lado de un triángulo rectángulo mediante 
el teorema de pitágoras.
*/

//Autor    KevinMonjardin
//Fecha    21-03-2022

int main () 
{
    float A, B, C;
    cout <<"Ingrese el lado A del tri\240ngulo: ";
    cin>>A;
    cout <<"Ingrese el lado B: ";
    cin>>B;
    C=sqrt(pow(A,2)+pow(B,2));
    cout<<"El tercer lado del tri\240ngulo es: "<< C;
    return 0;
}