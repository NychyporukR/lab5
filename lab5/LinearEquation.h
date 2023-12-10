#ifndef LINEAR_EQUATION_H
#define LINEAR_EQUATION_H

#include "Equation.h"

class LinearEquation : public Equation {
private:
    double a, b;

public:
    LinearEquation(double _a, double _b);

    void solve() const override;
};

#endif

