#ifndef FIGURE_H
#define FIGURE_H
#include <cstring>

class Figure {
public:
    virtual void Print() = 0;
    virtual double Area() = 0;
    virtual size_t VertexesNumber() = 0;
    virtual ~Figure() {};
};


#endif // FIGURE_H
