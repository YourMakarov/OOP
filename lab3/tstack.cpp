#include "tstack.h"

TStack::TStack() {
  top_ = std::shared_ptr<StackItem>(new StackItem);
  top_->next = nullptr;
  size = 0;
}

TStack::TStack(const TStack &stack) {
  std::shared_ptr<StackItem> top = stack.top_;

  while (top->next != nullptr) {
    top_->data = top->data;
    std::shared_ptr<StackItem> item1(new StackItem);
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
  return *(top_->data);
}

void TStack::Push(const std::shared_ptr<Pentagon> t) {
  std::shared_ptr<StackItem> item(new StackItem);
  item->data = t;
  item->next = top_;
  top_ = item;
  size++;
}

void TStack::Pop() {
  if (size == 0) {
    std::cout << "Unable to perform pop! The stack is empty!" << std::endl;
    return;
  }
  std::shared_ptr<StackItem> item = this->top_;
  top_ = top_->next;
  size--;
}

std::istream &operator>>(std::istream &is, TStack &object) {
  std::shared_ptr<Pentagon> t(new Pentagon);
  is >> *t;
  object.Push(t);
  return is;
}

std::ostream &operator<<(std::ostream &os, const TStack &object) {
  std::shared_ptr<TStack::StackItem> item = object.top_;
  os << "==> ";
  while (item->next != nullptr) {
    os << item->data->Area() << " ";
    item = item->next;
  }
  os << "==> ";
  return os;
}

void TStack::Clear() {
  while (top_->next != nullptr) {
    std::shared_ptr<StackItem> item = this->top_;
    top_ = top_->next;
  }
  size = 0;
  top_->next = nullptr;
}

TStack::~TStack() {
  while (top_->next != nullptr) {
    std::shared_ptr<StackItem> item = this->top_;
    top_ = top_->next;
  }
  size = 0;
}
