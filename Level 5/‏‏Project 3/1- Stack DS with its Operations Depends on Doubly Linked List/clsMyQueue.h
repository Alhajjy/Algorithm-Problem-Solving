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

  T GetItem(int index) { return _Queue.GetItem(index); }

  void Reverse() { _Queue.Reverse(); }

  void UpdateItem(int index, T value) { _Queue.UpdateItem(index, value); }

  void InsertAfter(int index, T value) { _Queue.InsertAfter(index, value); }

  void InsertAtFront(T value) { _Queue.InsertAtBeginning(value); }

  void InsertAtBack(T value) { _Queue.InsertAtEnd(value); }

  void Clear() { _Queue.Clear(); }
};