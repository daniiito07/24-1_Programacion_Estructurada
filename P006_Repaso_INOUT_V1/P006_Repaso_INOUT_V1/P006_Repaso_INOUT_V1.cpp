// P006_REPASO_ENTRADA_SALIDAD_DATOS_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes Cano
// Solicitar al usuario datos para realizar decisiones simples

#include <iostream>
#include <string>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string orden;
    std::string relato;
    int mayor_edad = 18;
    

    std::cout << "Hola usuario, bienvenido al repaso!\n";
    std::cout << "Para poder pasar al restaurante, necesitas ser mayor de edad, ¿Cuantos años tienes? :D \n";
    std::cin >> mayor_edad;
    if (mayor_edad >= 18)
    {
        std::cout << "Adelante, puedes pasar!\n";
        std::cout << "Perdon por la espera,por aquí esta su mesa\n";
        getline(std::cin, relato);
        std::cout << "¿Que desea ordenar?\n";
        getline(std::cin, orden);
        std::cout << "Enseguida se lo traemos :D\n";
    }
    else
    {
        std::cout << "Lo siento, eres muy pequeño para pasar\n";
    }
       

    



}