#ifndef MAI_OOP_TSTACK_H
#define MAI_OOP_TSTACK_H
#include "pentagon.h"

class TStack {
 private:
  struct QueueItem {
    Pentagon data;
    QueueItem *next;
  };
  size_t size;
  QueueItem *top_;

 public:
  TStack();
  TStack(const TStack &queue);
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