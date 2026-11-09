#include "Rhomb.h"

quadr::Rhomb::Rhomb(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd) :
    quadr::Rectangle(sda, sdb, sdc, sdd, crna, crnb, crnc, crnd)
{
    quadr::Square::CheckSides();
    quadr::Parallelogram::CheckCorners();
};

void quadr::Rhomb::PrintNameFigure()
{
    std::cout << "Ромб:" << std::endl;
}