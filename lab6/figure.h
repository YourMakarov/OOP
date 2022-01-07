#ifndef MAI_OOP_FIGURE_H
#define MAI_OOP_FIGURE_H
#include "point.h"
#include <memory>

class Figure {
 public:
  virtual size_t VertexesNumber() = 0;
  virtual double Area() = 0;
  virtual void Print(std::ostream &os) = 0;

};

#endif //MAI_OOP_FIGURE_H