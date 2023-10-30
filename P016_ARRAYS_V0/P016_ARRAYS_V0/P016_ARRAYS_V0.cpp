// P016_ARRAYS_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Captura de 3 juegos con nombre, año y estudio que lo creo con lo visto en arrays

#include <iostream>
#include <locale.h>
#include <string>
int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::string NOMBRES[4];
    std::string AUTOR[4];
    std::string ESTUDIO[4];
    int anio[3];
    bool repetir = true;
    while (repetir)
    {
    // CREACIÓN DE BIBLIOTECA
    for (int i = 0; i <= 2; i++)
    {
        std::cout << "Ingresa el nombre del juego " << i + 1 << std::endl;
        getline(std::cin, NOMBRES[i]);
        std::cout << "Ingresa el nombre del autor/es " << i + 1 << std::endl;
        getline(std::cin, AUTOR[i]);
        std::cout << "Ingresa el nombre del estudio " << i + 1 << std::endl;
        getline(std::cin, ESTUDIO[i]);
        std::cout << "Ingresa el año en que fue publicado el juego " << i + 1 << std::endl;
        std::cin >> anio[i];
        std::cin.ignore();
    }

    // PARA IMPRIMIR LOS DATOS
    for (int j = 0; j <= 2; j++)
    { 
        std::cout << "El juego " << j + 1 << " lleva por nombre " << NOMBRES[j] << std::endl;
        std::cout << "El autor/es " << j + 1 << " lleva por nombre " << AUTOR[j] << std::endl;
        std::cout << "El estudio " << j + 1 << " lleva por nombre " << ESTUDIO[j] << std::endl;
        std::cout << "El juego " << j + 1 << " fue publicado en " << anio[j] << std::endl;
    }
    
    std::cout << "¿ QUIERES INGRESAR OTROS JUEGOS ?   (1. SI   0. NO)\n ";
    std::cin >> repetir;
    }
    return 0;
}