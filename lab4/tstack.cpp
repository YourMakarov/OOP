#include "tstack.h"

template<typename T>
TStack<T>::TStack() {
  top_ = std::shared_ptr<StackItem>(new StackItem);
  top_->next = nullptr;
  size = 0;
}

template<typename T>
TStack<T>::TStack(const TStack<T> &stack) {
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

template<typename T>
size_t TStack<T>::Length() {
  return (size_t) size;
}

template<typename T>
bool TStack<T>::Empty() {
  return (size == 0);
}

template <typename T>
T TStack<T>::Top() {
  return *(top_->data);
}

template<typename T>
void TStack<T>::Push(const std::shared_ptr<T> t) {
  std::shared_ptr<StackItem> item(new StackItem);
  item->data = t;
  item->next = top_;
  top_ = item;
  size++;
}

template<typename T>
void TStack<T>::Pop() {
  if (size == 0) {
    return;
  }
  std::shared_ptr<StackItem> item = this->top_;
  top_ = top_->next;
  size--;
}

template<typename T>
std::istream &operator>>(std::istream &is, TStack<T> &object) {
  std::shared_ptr<Pentagon> t(new Pentagon);
  is >> *t;
  object.Push(t);
  return is;
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const TStack<T> &object) {
  std::shared_ptr<typename TStack<T>::StackItem> item = object.top_;
  os << "==> ";
  while (item->next != nullptr) {
    os << item->data->Area() << " ";
    item = item->next;
  }
  os << "==> ";
  return os;
}

template<typename T>
void TStack<T>::Clear() {
  while (top_->next != nullptr) {
    std::shared_ptr<StackItem> item = this->top_;
    top_ = top_->next;
  }
  size = 0;
  top_->next = nullptr;
}

template<typename T>
TStack<T>::~TStack() {
  while (top_->next != nullptr) {
    std::shared_ptr<StackItem> item = this->top_;
    top_ = top_->next;
  }
  size = 0;
}
