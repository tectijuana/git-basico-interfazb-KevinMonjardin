//Librerías
#include <iostream>
using namespace std;

/*
Ejercicio 46, Capítulo 3.
Una cantante de Nueva Orleans habita en un departamento de 6x6x6 m. Desea pintar las 
paredes y el techo con pintura que cubrirá 30 metros cuadrados por galón. Hacer un 
programa para determinar cuánta pintura debe comprar.
*/

//Autor    KevinMonjardin
//Fecha    22-03-2022

int main()
{
    int area,perimetro, pintura, resultado, alto = 6,ancho = 6, paredestecho = 5;
    pintura = alto*ancho;
    area = pintura * paredestecho;
    resultado = (area)/30;
    cout << "El total por cubrir es: "<< area<<" metros cuadrados.\nSe ocupar\240n: "
    <<resultado<<" galones.";

   
}

