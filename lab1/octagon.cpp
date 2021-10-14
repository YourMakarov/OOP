#include "octagon.h"

#include <cmath>



Octagon::Octagon(std::istream &is) {
  std::cout << "Enter data:" <<  std::endl;
  is >> a;
  is >> b;
  is >> c;
  is >> d;
  is >> e;
  is >> f;
  is >> g;
  is >> h;
}


void Octagon::Print() {
    std::cout << "Octagon: ";
    std::cout << a << ", ";
    std::cout << b << ", ";
    std::cout << c << ", ";
    std::cout << d << ", ";
    std::cout << e << ", ";
    std::cout << f << ", ";
    std::cout << g << ", ";
    std::cout << h << "\n" << std::endl;
}

double Octagon::Area() {
    double p = fabs(a.get_x()*b.get_y()-b.get_x()*a.get_y()+b.get_x()*c.get_y()-c.get_x()*b.get_x()+c.get_x()*d.get_y()-d.get_x()*c.get_y()+d.get_x()*e.get_y()-e.get_x()*d.get_y()+e.get_x()*f.get_y()-f.get_x()*e.get_y()+f.get_x()*g.get_y()-g.get_x()*f.get_y()+g.get_x()*h.get_y()-h.get_x()*g.get_y()+h.get_x()*a.get_y()-a.get_x()*h.get_y())/2;
    return p;
}

size_t Octagon::VertexesNumber() {
  return 8;
}

Octagon::~Octagon() {
    std::cout << "Octagon deleted" << std::endl;
}
