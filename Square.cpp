#include "Square.h"

quadr::Square::Square(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd) :
    Rectangle(sda, sdb, sdc, sdd, crna, crnb, crnc, crnd) {};

void quadr::Square::CheckSides()
{
    if (!(sideA == sideB && sideB == sideC && sideC == sideD))
    {
        throw std::invalid_argument("Ошибка при создании четырехугольника.\nСтороны неравны!");
    }
}

void quadr::Square::PrintNameFigure()
{
    std::cout << "Квадрат:" << std::endl;
}