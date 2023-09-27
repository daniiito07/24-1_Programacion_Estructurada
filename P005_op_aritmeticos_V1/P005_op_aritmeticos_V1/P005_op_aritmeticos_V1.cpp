// P005_op_aritmeticos_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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
    // Variables de creación
    // tipo de variable "Nombre de la varibales"= "inicialización"
    float a, b, c;
    a = 21;
    b = 7;
    c = a / b;

    std::cout << "El resultado de la division es: " << c << std::endl;

    float d, e, f;
    d = 20;
    e = 7;
    f = d - e;
    std::cout << "El resultado de la resta es: " << f << std::endl;
    float g, h, i;
    g = 9;
    h = 4;
    i = g * h;
    std::cout << "El resultado de la multiplicación es: " << i << std::endl;
    float j, k, l;
    j = 7;
    k = 5;
    l = j + k;
    std::cout << "El resultado de la suma es: " << l << std::endl;
    float m, n;
    m = 144;
    n = sqrt(144);
    std::cout << "El resultado de la raiz cuadrada es: " << n << std::endl;
    float o, p;
    o = 9;
    p = pow(9, 2);
    std::cout << "El resultado de la potencia es: " << p << std::endl;
}