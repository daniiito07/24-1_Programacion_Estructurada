// P018_Punteros_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Clase punteros, sintaxis y ejemplos

#include <iostream>
#include <Windows.h>

int main()
{
    int variable = 0;
    int* apuntador = &variable;

    std::cout << "El valor de la variable es: " << variable << std::endl;
    *apuntador = 20;
    std::cout << "El valor de la varibale es: " << variable << std::endl;
    //APUNTADOR SOLO, ES UNA DIRECCIÓN 
    std::cout << "El valor del apuntador es: " << apuntador << std::endl;
    // APUNTADOR
    std::cout << "El valor de la variable desde el apuntador es: " << *apuntador << std::endl;
    // DIRECCION DE LA VARIABLE ES LA MISMA A LA DEL APUNTADOR (DIRECCIÓN VIRTUAL Y ESTATICA)
    std::cout << "La direccion de la variable es: " << &variable << std::endl;



    // BORRAR EL APUNTADOR
    apuntador = NULL; // Evita que el caché se llene D:
}
