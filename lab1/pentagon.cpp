#include "pentagon.h"

#include <cmath>



Pentagon::Pentagon(std::istream &is) {
  is >> a;
  is >> b;
  is >> c;
  is >> d;
  is >> e;
}


void Pentagon::Print() {
  std::cout << "Pentagon: ";
  std::cout << a << " ";
  std::cout << b << " ";
  std::cout << c << " ";
  std::cout << d << " ";
  std::cout << e << "\n" << std::endl;
}

double Pentagon::Area() {
    double p = fabs(a.get_x()*b.get_y()-b.get_x()*a.get_y()+b.get_x()*c.get_y()-c.get_x()*b.get_x()+c.get_x()*d.get_y()-d.get_x()*c.get_y()+d.get_x()*e.get_y()-e.get_x()*d.get_y()+e.get_x()*a.get_y()-a.get_x()*e.get_y())/2;
    return p;
}

size_t Pentagon::VertexesNumber() {
  return 5;
}

Pentagon::~Pentagon() {
    std::cout << "Pentagon deleted" << std::endl;
}
