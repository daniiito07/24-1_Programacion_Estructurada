// P012_BUCLES_WHILE_FOR_V0.cpp : 
// Mauricio Cabrera
// Repaso de Bucle

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    int i = 0;
    bool iniciar;
    bool repetir = true;
    for (i = 0; i <= 100; i = i + 2)
    {
        std::cout << "El contador va en: " << i << std::endl;
    }
    std::cout << "Perdiste una vida, ¿Deseas continuar? (1 para si, 0 para no)\n";
    std::cin >> iniciar;
    if (iniciar == true)
    {
        std::cout << "Te quedan 2 vidas, ten más cuidado\n";
    }
   

    else
    {
        std::cout << "Perdiste :(\n";
    }
    for (i = 0; i <= 100; i = i + 2)
    {
        std::cout << "El contador va en: " << i << std::endl;
    }
}
