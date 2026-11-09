#include <iostream>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include <Windows.h>


int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    try
    {
        Triangle t(10, 20, 30, 50, 60, 70);
        RightTriangle rt(10, 20, 30, 50, 60, 90);
        IsoscelesTriangle it(10, 20, 10, 50, 60, 50);
        EquilateralTriangle et(30, 30, 30, 60, 60, 60);

        quadr::Quadrilateral q(10, 20, 30, 40, 50, 60, 70, 80);
        quadr::Rectangle r(10, 20, 10, 20, 90, 90, 90, 90);
        r.CheckSides();
        r.CheckCorners();

        quadr::Square s(20, 20, 20, 20, 90, 90, 90, 90);
        s.CheckSides();
        s.CheckCorners();

        quadr::Parallelogram p(20, 30, 20, 30, 30, 40, 30, 40);
        p.CheckSides();
        p.CheckCorners();

        quadr::Rhomb rh(30, 30, 30, 30, 30, 40, 30, 40);

        t.PrintInfo();
        rt.PrintInfo();
        it.PrintInfo();
        et.PrintInfo();

        q.PrintInfo();
        r.PrintInfo();
        s.PrintInfo();
        p.PrintInfo();
        rh.PrintInfo();
    }
    catch (const std::invalid_argument& err)
    {
        std::cout << err.what() << std::endl;
    }
}
