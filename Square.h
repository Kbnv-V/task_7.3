#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"
#include <iostream>

namespace quadr
{
    class Square : virtual public quadr::Rectangle //Квадрат
    {
    protected:
        void PrintNameFigure() override;

    public:
        void CheckSides();

        Square() = default;
        Square(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd);
    };
}

#endif


