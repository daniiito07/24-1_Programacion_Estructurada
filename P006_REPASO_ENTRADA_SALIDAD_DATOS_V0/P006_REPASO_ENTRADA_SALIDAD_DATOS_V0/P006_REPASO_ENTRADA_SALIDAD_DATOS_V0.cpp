// P006_REPASO_ENTRADA_SALIDAD_DATOS_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes Cano
// Solicitar al usuario datos para realizar decisiones simples

#include <iostream>
#include <string>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es,MX.UTF-8");
    char cadena_caracter[100];
    int mayor_edad = 18;
    int tiempo;

    std::cout << "Hola usuario, bienvenido al repaso!\n";
    std::cout << "Te vamos a pedir varios datos para poder pasar al restaurante, necesitas ser mayor de edad, ¿Cuantos años tienes? :D \n";
    std::cin >> mayor_edad;
    if (mayor_edad >= 18)
        std::cout << "Adelante, puedes pasar!\n";
    else
    {
        std::cout << "Lo siento, eres muy pequeño para pasar\n";
    }
    std::cout << "¿Por qué quieres entrar a este restaurante?\n";
    std::cin >> cadena_caracter;
    std::cout << "Ya veo... ahora solo necesitamos un dato mas, ¿Cuanto tiempo esperaste afuera? (Escribelo en minutos)\n";
    std::cin >> tiempo;
    std::cout << " Siento mucho la espera, ya puedes pasar\n";

        

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
