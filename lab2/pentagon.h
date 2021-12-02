#ifndef MAI_OOP_TRIANGLE_H
#define MAI_OOP_TRIANGLE_H
#include "figure.h"

class Pentagon {
 private:
  Point a_, b_, c_, d_, e_;
 public:
  Pentagon();
  Pentagon(const Pentagon &pentagon);
  Pentagon(std::istream &is);
  size_t VertexesNumber();
  double Area();
  void Print(std::ostream &os);
  friend std::istream &operator>>(std::istream &is, Pentagon &object);
  friend std::ostream &operator<<(std::ostream &os, Pentagon &object);
  Pentagon &operator=(const Pentagon &object);
  bool operator==(const Pentagon &object);

};

#endif //MAI_OOP_PENTAGON_H