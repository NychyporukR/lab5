#include <iostream>
#include <cmath>
#include "Equation.h"
#include "LinearEquation.h"
#include "QuadraticEquation.h"

int main() { 
    Equation* linearEquation = new LinearEquation(2, -5);
    Equation* quadraticEquation = new QuadraticEquation(1, -3, 2);

    linearEquation->solve();
    quadraticEquation->solve();

    delete linearEquation;
    delete quadraticEquation;

    return 0;
}
