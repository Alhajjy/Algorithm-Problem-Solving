#pragma once
#include "clsDynamicArray.h"

template <class T>
class clsMyQueueArr {
 protected:
  clsDynamicArray<T> _QueueArr;

 public:
  void push(T value) { _QueueArr.InsertAt(_QueueArr.Size(), value); }

  void Print() { _QueueArr.PrintList(); }

  int Size() { return _QueueArr.Size(); }

  T front() { return _QueueArr.GetItem(_QueueArr.Size() - 1); }

  T back() { return _QueueArr.GetItem(0); }

  void pop() { _QueueArr.DeleteFirstItem(); }

  T GetItem(int index) { return _QueueArr.GetItem(index); }

  void Reverse() { _QueueArr.Reverse(); }

  void UpdateItem(int index, T value) { _QueueArr.SetItem(index, value); }

  void InsertAfter(int index, T value) { _QueueArr.InsertAfter(index, value); }

  void InsertAtFront(T value) { _QueueArr.InsertAtBeginning(value); }

  void InsertAtBack(T value) { _QueueArr.InsertAtEnd(value); }

  void Clear() { _QueueArr.Clear(); }
};