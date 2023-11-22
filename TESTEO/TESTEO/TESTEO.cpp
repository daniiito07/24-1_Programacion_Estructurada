// P017_Matrices_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Generar 3 matrices distintas, una de 3, de 5 y de 10 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <Locale.h>


void llenarMatriz(int matriz[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matriz[i][j] = rand() % 10;
        }
    }
}
void mostrarMatriz(int matriz[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matriz[i][j] << " ";
            Sleep(50);
        }
        std::cout << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "Es_Mx.UTF-8");
    int matriz1[10][10];
    int matriz2[10][10];
    int matriz3[10][10];


    srand(time(NULL));

    llenarMatriz(matriz1, 3);
    llenarMatriz(matriz2, 5);
    llenarMatriz(matriz3, 10);
    bool repetir = true;
    int opcion;
    while (repetir)
    {
        std::cout << " --- Elija la matriz que quieres mostrar ---\n ";
        std::cout << "--- 1. Matriz de 3 ---\n";
        std::cout << " --- 2. Matriz de 5 ---\n";
        std::cout << " --- 3. Matriz de 10 ---\n";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            mostrarMatriz(matriz1, 3);
            break;
        case 2:
            mostrarMatriz(matriz2, 5);
            break;
        case 3:
            mostrarMatriz(matriz3, 10);
            break;
        default:
            if (opcion != 0) {
                std::cout << "Opción inválida." << std::endl;
            }
            break;
        }
        std::cout << "--- ¿Quieres generar una matriz distinta? ---\n";
        std::cout << "--- 1. Si ---\n";
        std::cout << "--- 0. No ---\n";
        std::cin >> repetir;
    }

    return 0;
}