#ifndef PENTAGON_H
#define PENTAGON_H

#include "figure.h"
#include "point.h"
#include <iostream>


class Pentagon : public Figure {
public:

    Pentagon(std::istream &is);
    virtual ~Pentagon();
    size_t VertexesNumber();
    void Print();
    double Area();

private:
    Point a, b, c, d, e;
};

#endif 
