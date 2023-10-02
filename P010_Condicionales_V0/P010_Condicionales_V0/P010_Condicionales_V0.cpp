// P010_Condicionales_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Se realizará un pequeño log in para el usuario con decisiones simples 

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string usuario;
    std::string contrasena;
 
    std::cout << "Bienvenido, a continuación podrás acceder a tu cuenta :D\n";
    do
    {
        std::cout << "Usuario: \n";
        std::cin >> usuario;

        std::cout << "Constraseña: \n";
        std::cin >> contrasena;

        if (usuario == "DANIIITO07")
        {
            if (contrasena == "123456")
            {
               
                std::cout << "      Bienvenido de nuevo :D\n  ";
               
            }
            else
            {
                
                std::cout << "       Intenta nuevamente, uno de tus datos no coincide D:\n         ";
              
            }
        }
        else
        {
          
            std::cout << "       Intenta nuevamente, uno de tus datos no coincide D:\n         ";
      
        }
    } while (usuario != "DANIIITO07"); (contrasena != "123456");
}
