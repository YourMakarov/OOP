#include "pentagon.h"
#include <math.h>

Pentagon::Pentagon() : a_(0, 0), b_(0, 0), c_(0, 0), d_(0, 0), e_(0, 0) {}

Pentagon::Pentagon(const Pentagon &pentagon) {
  this->a_ = pentagon.a_;
  this->b_ = pentagon.b_;
  this->c_ = pentagon.c_;
  this->d_ = pentagon.c_;
  this->e_ = pentagon.c_;
}

Pentagon::Pentagon(std::istream &is) {
  std::cin >> a_ >> b_ >> c_ >> d_ >> e_;
}

size_t Pentagon::VertexesNumber() {
  return (size_t) 5;
}

double Pentagon::Area() {
  double p = fabs(a_.get_x()*b_.get_y()-b_.get_x()*a_.get_y()+b_.get_x()*c_.get_y()-c_.get_x()*b_.get_x()+c_.get_x()*d_.get_y()-d_.get_x()*c_.get_y()+d_.get_x()*e_.get_y()-e_.get_x()*d_.get_y()+e_.get_x()*a_.get_y()-a_.get_x()*e_.get_y())/2;
    return p;
}

void Pentagon::Print(std::ostream &os) {
  std::cout << "Pentagon " << a_ << b_ << c_ << d_ << e_ << std::endl;
}

std::istream &operator>>(std::istream &is, Pentagon &object) {
  is >> object.a_ >> object.b_ >> object.c_ >> object.d_ >> object.e_;
  return is;
}

std::ostream &operator<<(std::ostream &os,  Pentagon &object) {
  os << "a side = " << object.a_.dist(object.b_) << std::endl;
  os << "b side = " << object.b_.dist(object.c_) << std::endl;
  os << "c side = " << object.c_.dist(object.d_) << std::endl;
  os << "d side = " << object.d_.dist(object.e_) << std::endl;
  os << "e side = " << object.e_.dist(object.a_) << std::endl;
  return os;
}

Pentagon &Pentagon::operator=(const Pentagon &object) {
  this->a_ = object.a_;
  this->b_ = object.b_;
  this->c_ = object.c_;
  this->d_ = object.d_;
  this->e_ = object.e_;
  return *this;
}

bool Pentagon::operator==(const Pentagon &object) {
  if (this->a_ == object.a_ && this->b_ == object.b_ && this->c_ == object.c_ && this->d_ == object.d_ && this->e_ == object.e_) {
    return true;
  } else return false;
}