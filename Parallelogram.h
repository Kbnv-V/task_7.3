#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Rectangle.h"
#include <iostream>

namespace quadr
{
    class Parallelogram : virtual public quadr::Rectangle //Параллелограм
    {
    protected:
        virtual void PrintNameFigure() override;

    public:
        Parallelogram() = default;
        Parallelogram(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd);

        void CheckCorners();
    };
}

#endif

