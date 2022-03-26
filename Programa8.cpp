//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 30, Capítulo 3.
Determinar el perímetro de un triángulo rectángulo, dadas las longitudes 
de la hipotenusa y un cateto.
*/

//Autor    KevinMonjardin
//Fecha    21-03-2022

int main () 
{
    float A, B, C, per;
    cout <<"Ingrese el cateto A: ";
    cin>>A;
    cout <<"Ingrese la hipotenusa: ";
    cin>>B;
    C=sqrt(pow(B,2)-pow(A,2));
    per=A+B+C;
    cout<<"El lado faltante tiene como valor: "<<C<<".\nEl per\241metro es: "<< per;
    return 0;
}