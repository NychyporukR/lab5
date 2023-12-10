#ifndef EQUATION_H
#define EQUATION_H

class Equation {
public:
    virtual void solve() const = 0;  // Віртуальна функція для обчислення коренів
    virtual ~Equation() {}
};

#endif


