#include "Rectangle.h"

quadr::Rectangle::Rectangle(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd) :
    Quadrilateral(sda, sdb, sdc, sdd, crna, crnb, crnc, crnd) {};

void quadr::Rectangle::CheckSides()
{
    if (!(sideA == sideC))
    {
        throw std::invalid_argument("Ошибка при создании четырехугольника.\nСторона A неравна B!");
    }
    else if (!(sideB == sideD))
    {
        throw std::invalid_argument("Ошибка при создании четырехугольника.\nСторона B неравна D!");
    }
}

void quadr::Rectangle::CheckCorners()
{
    if (!(cornerA == 90))
    {
        throw std::invalid_argument("Ошибка при создании прямоугольника.\nУгол A неравен 90 градусам!");
    }
    else if (!(cornerB == 90))
    {
        throw std::invalid_argument("Ошибка при создании четырехугольника.\nУгол B неравен 90 градусам!");
    }
    else if (!(cornerC == 90))
    {
        throw std::invalid_argument("Ошибка при создании четырехугольника.\nУгол C неравен 90 градусам!");
    }
    else if (!(cornerD == 90))
    {
        throw std::invalid_argument("Ошибка при создании четырехугольника.\nУгол D неравен 90 градусам!");
    }
}

void quadr::Rectangle::PrintNameFigure()
{
    std::cout << "Прямоугольник:" << std::endl;
}