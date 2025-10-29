#pragma once
#include "clsDblLinkedList.h"

template <class T>
class clsMyQueue {
 protected:
  clsDblLinkedList<T> _Queue;

 public:
  void Print() { _Queue.PrintList(); }

  void push(T value) { _Queue.InsertAtEnd(value); }

  void pop() { _Queue.DeleteFirstNode(); }

  T front() { return _Queue.GetItem(0); }

  T back() { return _Queue.GetItem(Size() - 1); }

  int Size() { return _Queue.Size(); }

  bool IsEmpty() { return _Queue.IsEmpty(); }
};
