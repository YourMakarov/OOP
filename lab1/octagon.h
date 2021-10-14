#ifndef OCTAGON_H
#define OCTAGON_H

#include "figure.h"
#include "point.h"
#include <iostream>


class Octagon : public Figure {
public:

    Octagon(std::istream &is);


    virtual ~Octagon();
    size_t VertexesNumber();
    void Print();
    double Area();

private:
    Point a, b, c, d, e, f, g, h;
};

#endif 