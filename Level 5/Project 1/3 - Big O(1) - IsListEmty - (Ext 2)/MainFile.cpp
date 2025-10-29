#include <iostream>

#include "clsDblLinkedList.h"

using namespace std;

int main() {
  clsDblLinkedList<int> MydblLinkedList;

  if (MydblLinkedList.IsEmpty2())
    cout << "list is empty";
  else
    cout << "no list is not empty";

  MydblLinkedList.InsertAtBeginning(5);
  MydblLinkedList.InsertAtBeginning(4);
  MydblLinkedList.InsertAtBeginning(3);
  MydblLinkedList.InsertAtBeginning(2);
  MydblLinkedList.InsertAtBeginning(1);

  cout << "\nLinked List Contenet:\n";
  MydblLinkedList.PrintList();

  if (MydblLinkedList.IsEmpty2())
    cout << "list is empty";
  else
    cout << "no list is not empty";
  cout << "Number of Items is: " << MydblLinkedList.Size() << endl;
  system("pause>0");
}