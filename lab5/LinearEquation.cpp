#include "LinearEquation.h"
#include <iostream>

LinearEquation::LinearEquation(double _a, double _b) : a(_a), b(_b) {}

void LinearEquation::solve() const {
    if (a != 0) {
        double x = -b / a;
        std::cout << "Linear Equation Solution: x = " << x << std::endl;
    }
    else {
        std::cout << "Invalid linear equation (a cannot be zero)." << std::endl;
    }
}
