#ifndef RHOMB_H
#define RHOMB_H

#include "Square.h"
#include "Parallelogram.h"
#include <iostream>

namespace quadr
{
    class Rhomb : public quadr::Square, public quadr::Parallelogram
    {
    private:
        void PrintNameFigure() override;

    public:
        Rhomb() = default;
        Rhomb(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd);
    };
}

#endif

