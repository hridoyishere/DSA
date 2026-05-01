// Insert at Beginning of a Linked List
// This program demonstrates how to insert a new node at the beginning of a linked list in C++.

#include <iostream>
using namespace std;



struct Node {
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr) {}
};

void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node(newData); 
    newNode->next = head; 
    head = newNode; 
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr; 

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    cout << "Linked List after inserting at the beginning: ";
    printList(head);



    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}