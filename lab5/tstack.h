#ifndef MAI_OOP_TSTACK_H
#define MAI_OOP_TSTACK_H
#include "pentagon.h"
#include "titerator.h"

template <class T>
class TStack {
 private:
  struct StackItem {
    std::shared_ptr<T> data;
    std::shared_ptr<StackItem> next;
  };
  size_t size;
  std::shared_ptr<StackItem> top_;

 public:
  TStack();
  TStack(const TStack<T> &stack);
  size_t Length();
  bool Empty();
  T Top();
  void Push(const std::shared_ptr<T> t);
  void Pop();
  void Clear();
  template<typename Y>
  friend std::istream &operator>>(std::istream &is, TStack<Y> &object);
  template<typename Y>
  friend std::ostream &operator<<(std::ostream &os, const TStack<Y> &object);

  TIterator<StackItem, T> top();

  virtual ~TStack();
};

#endif 