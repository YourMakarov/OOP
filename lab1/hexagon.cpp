#include "hexagon.h"

#include <cmath>



Hexagon::Hexagon(std::istream &is) {
  std::cout << "Enter data:" <<  std::endl;
  is >> a;
  is >> b;
  is >> c;
  is >> d;
  is >> e;
  is >> f;

}


void Hexagon::Print() {
    std::cout << "Hexagon: ";
    std::cout << a << ", ";
    std::cout << b << ", ";
    std::cout << c << ", ";
    std::cout << d << ", ";
    std::cout << e << ", ";
    std::cout << f << "\n" << std::endl;
}

double Hexagon::Area() {
    double p = fabs(a.get_x()*b.get_y()-b.get_x()*a.get_y()+b.get_x()*c.get_y()-c.get_x()*b.get_x()+c.get_x()*d.get_y()-d.get_x()*c.get_y()+d.get_x()*e.get_y()-e.get_x()*d.get_y()+e.get_x()*f.get_y()-f.get_x()*e.get_y()+f.get_x()*a.get_y()-a.get_x()*f.get_y())/2;
    return p;
}

size_t Hexagon::VertexesNumber() {
  return 6;
}

Hexagon::~Hexagon() {
    std::cout << "Hexagon deleted" << std::endl;
}
