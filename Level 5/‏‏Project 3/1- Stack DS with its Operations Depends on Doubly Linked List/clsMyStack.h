#pragma once
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"

template <class T>
class clsMyStack : public clsMyQueue <T> {
 protected:

 public:
  void push(T item) {
	  clsMyQueue <T>::_Queue.InsertAtBeginning(item);
  }
  T Top() { return clsMyQueue <T>::front(); }
  T Bottom() { return clsMyQueue<T>::back(); }
};
