#include "menu.h"
#include <locale.h>
#include <iostream>

void print_menu(void) {
    std::cout << "What action do you want to perform on the matrix?" << "\n";
    std::cout << "1. Finding the determinant of a matrix" << "\n";
    std::cout << "2. Addition of matrices" << "\n";
    std::cout << "3. Subtraction of matrices" << "\n";
    std::cout << "4. Transpose of a matrix" << "\n";
}

void menu(void) {
    int operation;

    print_menu();
    re_input:
    std::cout << "Enter the required command: ";
    std::cin >> operation;
    switch (operation)
    {
    case 1: // нахождение det
        std::cout << "in process" << std::endl;
        break;
    case 2: // сложение матриц
        std::cout << "in process" << std::endl;
        break;
    case 3: // вычитание матриц
        std::cout << "in process" << std::endl;
        break;
    case 4: // умножение матриц
        std::cout << "in process" << std::endl;
        break;
    /*
    case 5: // находение обратной матрицы
        
        break;
    */
    default:
        std::cout << "Input error, non-existent command selected" << std::endl;
        goto re_input;
        break;
    }
}