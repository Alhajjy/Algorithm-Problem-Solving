#pragma once
#include "clsDynamicArr.h"

template <class T>
class clsMyStackArr {
 protected:
  clsDynamicArray<T> _MyStackArr;

 public:
  void push(T value) { _MyStackArr.InsertAtEnd(value); }

  void Print() { _MyStackArr.PrintList(); }

  int Size() { return _MyStackArr.Size(); }

  T Top() { return _MyStackArr.GetItem(_MyStackArr.Size() - 1); }

  T Bottom() { return _MyStackArr.GetItem(0); }

  void pop() { _MyStackArr.DeleteLastItem(); }

  T GetItem(int index) { return _MyStackArr.GetItem(index); }

  void Reverse() { _MyStackArr.Reverse(); }

  void UpdateItem(int index, T value) { _MyStackArr.SetItem(index, value); }

  void InsertAfter(int index, T value) {
    _MyStackArr.InsertAfter(index, value);
  }

  void InsertAtFront(T value) { _MyStackArr.InsertAtBeginning(value); }

  void InsertAtBack(T value) { _MyStackArr.InsertAtEnd(value); }

  void Clear() { _MyStackArr.Clear(); }
};