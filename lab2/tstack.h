#ifndef MAI_OOP_TSTACK_H
#define MAI_OOP_TSTACK_H
#include "pentagon.h"

class TStack {
 private:
  struct StackItem {
    Pentagon data;
    StackItem *next;
  };
  size_t size;
  StackItem *top_;

 public:
  TStack();
  TStack(const TStack &stack);
  size_t Length();
  bool Empty();
  Pentagon &Top();
  void Push(const Pentagon &t);
  void Pop();
  void Clear();
  friend std::istream &operator>>(std::istream &is, TStack &object);
  friend std::ostream &operator<<(std::ostream &os, const TStack &object);

  virtual ~TStack();
};

#endif 
