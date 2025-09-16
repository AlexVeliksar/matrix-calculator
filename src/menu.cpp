#include "menu.h"
#include "calculation.h"
#include <locale.h>
#include <iostream>

void print_menu(void) {
    constexpr std::string_view menu = R"(What action do you want to perform on the matrix?
    1. Finding the determinant of a matrix
    2. Addition of matrices
    3. Subtraction of matrices
    4. Matrix multiplication
    5. Finding the inverse matrix
    6. Transpose of a matrix
    )";
    std::cout << menu;
}

void menu(void) {
    int operation;

    print_menu();
    re_input:
    std::cout << "Enter the required command: ";
    std::cin >> operation;
    switch (operation)
    {
    // нахождение det
    case 1: 
        calculation_matrix(1);
        break;
    // сложение матриц
    case 2: 
        calculation_matrix(2);
        break;
    // вычитание матриц
    case 3: 
        calculation_matrix(3);
        break;
    // умножение матриц
    case 4:
        calculation_matrix(4);
        break;
    // находение обратной матрицы
    case 5:
        calculation_matrix(5);
        break;
    // транспонирование матрицы
    case 6:
        calculation_matrix(6);
        break;
    default:
        std::cout << "Input error, non-existent command selected" << std::endl;
        goto re_input;
        break;
    }
}