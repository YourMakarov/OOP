#include "tstack.h"

TStack::TStack() {
  top_ = new QueueItem;
  top_->next = nullptr;
  size = 0;
}

TStack::TStack(const TStack &stack) {
  QueueItem *top = stack.top_;

  while (top->next != nullptr) {
    top_->data = top->data;
    QueueItem *item1 = new QueueItem;
    item1->next = nullptr;
    top_->next = item1;
    top = top->next;
  }
  size = stack.size;
}

size_t TStack::Length() {
  return (size_t) size;
}

bool TStack::Empty() {
  return (size == 0);
}

Pentagon &TStack::Top() {
  return top_->data;
}

void TStack::Push(const Pentagon &t) {
  QueueItem *item = new QueueItem;
  item->data = t;
  item->next = top_;
  top_ = item;
  size++;
}

void TStack::Pop() {
  if (size == 0) {
    std::cout << "Unable to perform pop! The queue is empty!" << std::endl;
    return;
  }
  QueueItem *item = top_;
  top_ = top_->next;

  delete item;
  size--;
}

std::istream &operator>>(std::istream &is, TStack &object) {
  Pentagon t;
  is >> t;
  object.Push(t);
  return is;
}

std::ostream &operator<<(std::ostream &os, const TStack &object) {
  TStack::QueueItem *item = object.top_;
  os << "==> ";
  while (item->next != nullptr) {
    os << item->data.Area() << " ";
    item = item->next;
  }
  os << "==> ";
  return os;
}

void TStack::Clear() {
  while (top_->next != nullptr) {
    QueueItem *item = top_;
    top_ = top_->next;
    delete item;
  }
  size = 0;
  top_->next = nullptr;
}

TStack::~TStack() {
  while (top_->next != nullptr) {
    QueueItem *item = top_;
    top_ = top_->next;
    delete item;
  }
  size = 0;
  delete top_;
}