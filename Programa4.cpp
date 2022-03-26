//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 18, Capítulo 3.
Introducir las longitudes de los catetos de un 
triángulo rectángulo y calcular el perímetro.
*/

//Autor    KevinMonjardin
//Fecha    21-03-2022

int main () 
{
    float A, B, C, per;
    cout <<"Ingrese el cateto A: ";
    cin>>A;
    cout <<"Ingrese el cateto B: ";
    cin>>B;
    C=sqrt(pow(A,2)+pow(B,2));
    per=A+B+C;
    cout<<"El per\241metro del tri\240ngulo rect\240ngulo es: "<< per;
    return 0;
}