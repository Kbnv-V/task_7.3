#include "RightTriangle.h"

RightTriangle::RightTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc) : Triangle(sda, sdb, sdc, crna, crnb, crnc)
{
    Check();
}

void RightTriangle::Check()
{
    if (cornerC != 90)
    {
        throw std::invalid_argument("Ошибка при создании прямоугольного треугольника.\nУгол C неравен 90 грдусам!");
    }
}

void RightTriangle::PrintNameFigure()
{
    std::cout << "Прямоугольный треугольник:" << std::endl;
}