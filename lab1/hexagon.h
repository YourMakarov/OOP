#ifndef HEXAGON_H
#define HEXAGON_H

#include "figure.h"
#include "point.h"
#include <iostream>


class Hexagon : public Figure {
public:

    Hexagon(std::istream &is);


    virtual ~Hexagon();
    size_t VertexesNumber();
    void Print();
    double Area();

private:
    Point a, b, c, d, e, f;
};

#endif 