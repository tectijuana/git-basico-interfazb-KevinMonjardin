//Librerías
#include <iostream>
#include <math.h>
using namespace std;

/*
Ejercicio 09, Capítulo 5.
Determinar el porcentaje de veces que la suma de dos dados sera 2, 3 ó 12.
*/

//Autor    KevinMonjardin
//Fecha    23-03-2022

int main () 
{
    double c, c2, c3;
    c=((float)2/36)*100;
    c2=((float)3/36)*100;
    c3=((float)12/36)*100;
    cout<<"Porcentajes de suma de dados:\nSuma dados\tPorcentaje"
    <<"\n2\t\t"<<c<<"%\n3\t\t"<<c2<<"%\n12\t\t"<<c3<<"%";
    return 0;
}