#include <iostream>

#include "clsDblLinkedList.h"

using namespace std;

int main() {
  clsDblLinkedList<int> MydblLinkedList;

  if (MydblLinkedList.IsEmpty())
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

  MydblLinkedList.Reverse();
  cout << "\nLinked List Contenet after reversing:\n";
  MydblLinkedList.PrintList();

  //if (MydblLinkedList.IsEmpty())
  //  cout << "list is empty";
  //else
  //  cout << "no list is not empty";


  //cout << "\n\nClearing the list..\n" << endl;
  //MydblLinkedList.Clear();

  //if (MydblLinkedList.IsEmpty())
  //  cout << "list is empty";
  //else
  //  cout << "no list is not empty";
  //cout << "Number of Items is: " << MydblLinkedList.Size() << endl;
  system("pause>0");
}