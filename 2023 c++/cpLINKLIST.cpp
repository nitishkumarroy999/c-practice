#include <iostream>

class Node {
 public:
  int data;
  Node* next;
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

class LinkedList {
 public:
  Node* head;
  LinkedList() {
    this->head = NULL;
  }
  void insert(int data) {
    Node* newNode = new Node(data);
    newNode->next = this->head;
    this->head = newNode;
  }
  void printList() {
    Node* current = this->head;
    while (current != NULL) {
      std::cout << current->data << " -> ";
      current = current->next;
    }
    std::cout << "NULL" << std::endl;
  }
};

int main() {
  LinkedList list;
  list.insert(1);
  list.insert(2);
  list.insert(3);
  list.printList();
  return 0;
}
