#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
    }

    void display() {
        Node* current = head;
        if (head == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }
        while (current->next != head) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << current->data << std::endl;
    }
};

int main() {
    CircularLinkedList* list = new CircularLinkedList();
    list->append(1);
    list->append(2);
    list->append(3);
    list->display();
    return 0;
}
