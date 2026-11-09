#include "Quadrilateral.h"
#include <iostream>

quadr::Quadrilateral::Quadrilateral() {};
quadr::Quadrilateral::Quadrilateral(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd) :
    sideA(sda),
    sideB(sdb),
    sideC(sdc),
    sideD(sdd),
    cornerA(crna),
    cornerB(crnb),
    cornerC(crnc),
    cornerD(crnd)
{
};

void quadr::Quadrilateral::PrintNameFigure()
{
    std::cout << "Прямоугльник:" << std::endl;
}

void quadr::Quadrilateral::PrintInfo()
{
    PrintNameFigure();
    std::cout << "Стороны: " << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD << std::endl;
    std::cout << "Углы: " << "А = " << cornerA << " b = " << cornerB << " C = " << cornerC << " D = " << cornerD << std::endl;
    std::cout << std::endl;
}