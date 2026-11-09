#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc) : Triangle(sda, sdb, sdc, crna, crnb, crnc)
{
    Check();
};

void IsoscelesTriangle::Check()
{
    if (sideA != sideC)
    {
        throw std::invalid_argument("Ошибка при создании равнобедренного треугольника.\nСторона A неравна стороне C!");
    }
    else if (cornerA != cornerC)
    {
        throw std::invalid_argument("Ошибка при создании равнобедренного треугольника.\nУгол A неравен углу C!");
    }
}

void IsoscelesTriangle::PrintNameFigure()
{
    std::cout << "Равнобедренный треугольник:" << std::endl;
}