#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"
#include <iostream>

namespace quadr
{
    class Rectangle : public quadr::Quadrilateral //Прямоугольник
    {
    public:
        Rectangle() = default;
        Rectangle(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd);

        void CheckSides();
        void CheckCorners();

    protected:
        virtual void PrintNameFigure() override;
    };
}

#endif

