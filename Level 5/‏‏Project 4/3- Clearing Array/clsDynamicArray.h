#pragma once
#include <iostream>

using namespace std;
template <class T>
class clsDynamicArray {
 protected:
  int _Size = 0;
  T *_TempArray;

 public:
  T *OriginalArray;

  clsDynamicArray(int Size = 0) {
    if (Size < 0) Size = 0;
    _Size = Size;
    OriginalArray = new T[_Size];
  }

  ~clsDynamicArray() { delete[] OriginalArray; }

  bool SetItem(int index, T value) {
    if (index >= _Size || _Size < 0) {
      return false;
    }
    OriginalArray[index] = value;
    return true;
  }

  int Size() { return _Size; }

  bool IsEmpty() {
    if (_Size == 0) return true;
    return false;
  }

  void PrintList() {
    cout << "Items:" << endl;
    for (int i = 0; i < _Size; i++) {
      cout << OriginalArray[i] << "\t";
    }
    cout << endl;
  }

  void Resize(int new_size) {
    if (new_size < 0) new_size = 0;

    _TempArray = new T[new_size];

    // limit origin size to new size:
    if (new_size < _Size) _Size = new_size;

    // copy data [original ==>> Temp]
    for (int i = 0; i < _Size; i++) {
      _TempArray[i] = OriginalArray[i];
    }
    _Size = new_size;
    delete[] OriginalArray;
    OriginalArray = _TempArray;
  }

  T GetItem(int index) { return OriginalArray[index]; }

  void Reverse() {
    _TempArray = new T[_Size];
    for (int i = 0; i < _Size; i++) {
      _TempArray[i] = OriginalArray[_Size - i - 1];
    }
    delete[] OriginalArray;
    OriginalArray = _TempArray;
  }

  void Clear() { Resize(0); }
};