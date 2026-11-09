#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc) : Triangle(sda, sdb, sdc, crna, crnb, crnc)
{
    Check();
};

void EquilateralTriangle::Check()
{
    if (!(sideA == sideB && sideB == sideC))
    {
        throw std::invalid_argument("Ошибка при создании равностороннего треугольника.\nСтороны неравны!");
    }
    else if (!(cornerA == cornerB && cornerB == cornerC))
    {
        throw std::invalid_argument("Ошибка при создании равностороннего треугольника.\nУглы неравны!");
    }
}

void EquilateralTriangle::PrintNameFigure()
{
    std::cout << "Равносторонний треугольник:" << std::endl;
}