#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#include "Equation.h"

class QuadraticEquation : public Equation {
private:
    double a, b, c;

public:
    QuadraticEquation(double _a, double _b, double _c);

    void solve() const override;
};

#endif
