#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"
#include <iostream>

class RightTriangle : public Triangle //прямоугольный треугольник
{
private:
    void Check();

    void PrintNameFigure() override;

public:
    RightTriangle() = default;
    RightTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc);
};

#endif
