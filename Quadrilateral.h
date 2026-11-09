#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

namespace quadr
{
    class Quadrilateral //произвольный четырехугольник
    {
    protected:
        int sideA{}; //значения сторон
        int sideB{};
        int sideC{};
        int sideD{};

        int cornerA{}; //значения углов
        int cornerB{};
        int cornerC{};
        int cornerD{};

        virtual void PrintNameFigure();

    public:
        Quadrilateral();
        Quadrilateral(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd);

        void PrintInfo();
    };
}

#endif

