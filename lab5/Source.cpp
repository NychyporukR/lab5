#include <iostream>
#include <cmath>
#include "Equation.h"
#include "LinearEquation.h"
#include "QuadraticEquation.h"

int main() {
    // Використання абстрактного класу через вказівник
    Equation* linearEquation = new LinearEquation(2, -5);
    Equation* quadraticEquation = new QuadraticEquation(1, -3, 2);

    // Виклик функції solve для обчислення коренів рівнянь
    linearEquation->solve();
    quadraticEquation->solve();

    delete linearEquation;
    delete quadraticEquation;

    return 0;
}
