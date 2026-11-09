#include "Parallelogram.h"

quadr::Parallelogram::Parallelogram(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd) :
    Rectangle(sda, sdb, sdc, sdd, crna, crnb, crnc, crnd)
{
    CheckSides();
    CheckCorners();
};

void quadr::Parallelogram::CheckCorners()
{
    if (!(cornerA == cornerC))
    {
        throw std::invalid_argument("Ошибка при создании четырехугольника.\nУгол A неравен B!");
    }
    else if (!(cornerB == cornerD))
    {
        throw std::invalid_argument("Ошибка при создании четырехугольника.\nУгол B неравен D!");
    }
}

void quadr::Parallelogram::PrintNameFigure()
{
    std::cout << "Параллелограм:" << std::endl;
}