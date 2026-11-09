#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc) :
    sideA(sda),
    sideB(sdb),
    sideC(sdc),
    cornerA(crna),
    cornerB(crnb),
    cornerC(crnc)
    {};

void Triangle::PrintNameFigure()
{
    std::cout << "Треугольник:" << std::endl;
}

void Triangle::PrintInfo()
{
    PrintNameFigure();
    std::cout << "Стороны: " << "a = " << sideA << " b = " << sideB << " c = " << sideC << std::endl;
    std::cout << "Углы: " << "А = " << cornerA << " b = " << cornerB << " C = " << cornerC << std::endl;
    std::cout << std::endl;
}