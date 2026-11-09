#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include<iostream>
#include "Triangle.h"

class EquilateralTriangle : public Triangle //равносторонний треугольник
{
private:
    void Check();

    virtual void PrintNameFigure() override;

public:
    EquilateralTriangle() = default;
    EquilateralTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc);
};

#endif

