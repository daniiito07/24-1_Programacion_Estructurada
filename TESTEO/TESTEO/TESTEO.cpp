#include <iostream>
#include <chrono>
#include <thread>

void delay(int millisegundos)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(millisegundos));
}

int main()
{
    int opt;
    bool repetir = true;

    while (repetir)
    {
        std::cout << "1.- Contador de 1000 a 0 (for)\n";
        std::cout << "2.- Contador de 1000 a 0 (while)\n";
        std::cout << "3.- Contador de 1000 a 0 (do-while)\n";
        std::cout << "4.- Contador de 0 a 100 lentamente\n";
        std::cout << "5.- Contador 10x10\n";
        std::cout << "¿Qué contador quieres utilizar? (1/2/3/4/5): ";
        std::cin >> opt;

        switch (opt)
        {
        case 1:
            // Contador de 1000 a 0 con for
            for (int i = 1000; i >= 0; i--)
            {
                std::cout << "Contador " << i << std::endl;
            }
            break;

        case 2:
            // Contador de 1000 a 0 con while
            int j = 1000;
            while (j >= 0)
            {
                std::cout << "Contador " << j << std::endl;
                j--;
            }
            break;

        case 3:
            // Contador de 1000 a 0 con do-while
            int k = 1000;
            do
            {
                std::cout << "Contador " << k << std::endl;
                k--;
            } while (k >= 0);
            break;

            int i = 0;
        case 4:
            // Contar lentamente de 0 a 100
            for (int i = 0; i <= 100; i++)
            {
                std::cout << "Contador " << i << std::endl;
                delay(200);
            }        
            break;

        case 5:
            // Contador 10x10
            for (int i = 1; i <= 100; i++)
            {
                std::cout << i << " ";
                if (i % 10 == 0) {
                    std::cout << std::endl;
                }
            }
            break;

        default:
            std::cout << "Opción no válida. Por favor, elige una opción válida.\n";
            break;
        }

        std::cout << "¿Deseas repetir el contador? (0 = NO, 1 = SI): ";
        std::cin >> repetir;
    }

    return 0;
}
