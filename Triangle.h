#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle //произвольный треугольник
{
protected:
    int sideA{}; //значения сторон
    int sideB{};
    int sideC{};

    int cornerA{}; //значения углов
    int cornerB{};
    int cornerC{};

    virtual void PrintNameFigure();

public:
    Triangle() = default;
    Triangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc);

    void PrintInfo();
};

#endif // !TRIANGLE_H

