// P003_Variables_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes
// Este programa tendrá impresión de pantalla
// Creacion Variables
// Inicializacón de varaiables 
// Solicitud de variables
//
#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World!\n";
    // Variables de creación
    // tipo de variable "Nombre de la varibales"= "inicialización"
    bool mi_primer_booleano = true;
    int mi_primer_entero = 0;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primer_cadenacaracteres[100]= "Hola vato";
    std::string mi_primer_string = "Alo chavitos";

    //Mostrarle al usuario lo que creamos de variables
    std::cout << "Muy buenos días Mau espero estes bien\n";
    std::cout << "En el booleano tienes guardado:" <<
        mi_primer_booleano << std::endl;
    std::cout << "En el entero tienes guardado:" <<
        mi_primer_entero << std::endl;
    std::cout << "En el flotante tienes guardado:"<<
        mi_primer_flotante << std::endl;
    std::cout << "En el primer caracter tienes guardado" <<
        mi_primer_caracter << std::endl;
    std::cout << "En la cadena tienes guardado:" <<
        mi_primer_cadenacaracteres << std::endl;
    std::cout << "En el string tienes guardado:" <<
        mi_primer_string << std::endl;
    //Solicitar al usuario cambios
    std::cout << "usuario dame por favor un 0 o 1;" <<
        std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    
    //Solicitar al usuario cada una de las variables
    std::cout << "usuario dame por favor un numero entero" <<
        std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "En el entero tienes:" <<
        mi_primer_entero << std::endl;
    std::cout << "Usuario dame un numero flotante" <<
        std::endl;
    std::cin >> mi_primer_flotante;
    std::cout << "En el flotante tienes:" <<
        mi_primer_flotante << std::endl;
    std::cout << "Usuario dame un caracter" <<
        std::endl;
    std::cin >> mi_primer_caracter;
    std::cout << "En el caracter tienes:" <<
        mi_primer_caracter << std::endl;
    std::cout << "Usuario dame una cadena de caracteres" <<
        std::endl;
    std::cin >> mi_primer_cadenacaracteres;
    std::cout << "En la cadena de caracteres tienes" <<
        mi_primer_cadenacaracteres << std::endl;

}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

