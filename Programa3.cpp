//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 17, Capítulo 3.
Introducir las longitudes de los lados de un triángulo. 
Determinar si el triángulo es isósceles, equilátero o escaleno.
*/

//Autor    KevinMonjardin
//Fecha    21-03-2022

int main () 
{
    float A, B, C;
    string uno="is\242sceles", dos="equilatero", tres="escaleno";
    cout <<"Ingrese el lado A del tri\240ngulo: ";
    cin>>A;
    cout <<"Ingrese el lado B: ";
    cin>>B;
    cout <<"Ingrese el lado C: ";
    cin>>C;
    
    if(A!=B && A!=C && B!=C)
    {
        cout<<"El tri\240ngulo es: "<< tres;
    }
    else if(A==B && B==C)
    {
        cout<<"El tri\240ngulo es: "<< dos;
    }
    else if(A==B || A==C || B==C)
    {
        cout<<"El tri\240ngulo es: "<< uno;
    }
    return 0;
}