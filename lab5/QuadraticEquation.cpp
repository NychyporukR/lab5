#include "QuadraticEquation.h"
#include <iostream>
#include <cmath>

QuadraticEquation::QuadraticEquation(double _a, double _b, double _c) : a(_a), b(_b), c(_c) {}

void QuadraticEquation::solve() const {
    if (a != 0) {
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
            double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
            std::cout << "Quadratic Equation Solutions: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
        else if (discriminant == 0) {
            double x = -b / (2 * a);
            std::cout << "Quadratic Equation Solution: x = " << x << std::endl;
        }
        else {
            std::cout << "Quadratic Equation has no real solutions." << std::endl;
        }
    }
    else {
        std::cout << "Invalid quadratic equation (a cannot be zero)." << std::endl;
    }
}
