#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList {
 protected:
  int _Size = 0;

 public:
  class Node {
   public:
    Node *prev;
    T value;
    Node *next;
  };

  Node *head = NULL;

  void InsertAtBeginning(T value) {
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = head;
    new_node->prev = NULL;

    if (head != NULL) head->prev = new_node;

    head = new_node;
    _Size++;
  }

  void PrintList() {
    Node *current = head;
    while (current != NULL) {
      cout << current->value << endl;
      current = current->next;
    }
  }

  Node *Find(T value) {
    Node *current = head;
    while (current != NULL) {
      if (current->value == value) return current;
      current = current->next;
    }
    return NULL;
  }

  void InsertAfter(Node *current, T value) {
    Node *new_node = new Node();
    new_node->value = value;
    new_node->next = current->next;
    new_node->prev = current;

    if (current->next != NULL) {
      current->next->prev = new_node;
    }

    current->next = new_node;
    _Size++;
  }

  void InsertAtEnd(T value) {
    Node *new_node = new Node();
    new_node->next = NULL;
    new_node->value = value;

    if (head == NULL) {
      new_node->prev = NULL;
      head = new_node;
    }

    Node *current = head;

    while (current->next != NULL) {
      current = current->next;
    }
    new_node->prev = current;
    current->next = new_node;
    _Size++;
  }

  void DeleteNode(Node *&NodeToDelete) {
    Node *current = head;

    while (current->next != NodeToDelete) {
      current = current->next;
    }

    current->next = NodeToDelete->next;
    NodeToDelete->next->prev = current;
    delete NodeToDelete;
    _Size--;
  }

  void DeleteFirstNode() {
    if (head == NULL) return;

    Node *temp = head;

    head = head->next;
    if (head != NULL) {
      head->prev = NULL;
    }
    delete temp;
    _Size--;
  }

  void DeleteLastNode() {
    if (head == NULL) return;

    if (head->next == NULL) {
      delete head;
      head = NULL;
      return;
    }

    Node *current = head;
    // we need to find the node before last node
    while (current->next->next != NULL) {
      current = current->next;
    }

    Node *temp = current->next;
    current->next = NULL;
    delete temp;
    _Size--;
  }

  int Size() { return _Size; }

  bool IsEmpty() {
    if (_Size == 0) return true;
    return false;
  }

  void Clear (){
    while(_Size > 0){
        DeleteFirstNode();
    }
  }

  void Reverse(){
    Node *current = head;
    Node *temp = nullptr;

    while(current != nullptr){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != nullptr){
        head = temp->prev;
    }
  }



};
