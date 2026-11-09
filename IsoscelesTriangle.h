#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include <iostream>
#include "Triangle.h"

class IsoscelesTriangle : public Triangle //равнобедренный треугольник
{
private:
    void Check();

    virtual void PrintNameFigure() override;

public:
    IsoscelesTriangle() = default;
    IsoscelesTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc);
};

#endif

