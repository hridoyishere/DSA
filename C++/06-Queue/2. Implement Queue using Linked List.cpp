// Implement Queue using Linked List
// This program demonstrates how to implement a queue using a linked list in C++.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    void display() {
        Node* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue after enqueuing 10, 20, 30: ";
    q.display();

    q.dequeue();
    cout << "Queue after dequeuing: ";
    q.display();

    q.dequeue();
    cout << "Queue after dequeuing again: ";
    q.display();

    q.dequeue();
    cout << "Queue after dequeuing again: ";
    q.display();

    return 0;
}