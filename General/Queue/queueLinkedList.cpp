#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Queue {
    Node* front;
    Node* rear;
    int sz;
    Queue() {
        front = NULL;
        rear = NULL;
        sz = 0;
    }

    void enqueue(int x) {
        Node *new_node = new Node(x);
        if (front == NULL) {
            front = rear = new_node;
            return;
        }
        rear->next = new_node;
        rear = new_node;
        sz++;
    }

    void deque() {
        if (isEmpty()) return;
        Node *temp = front;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        delete(temp);
        sz--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return front->data;
    }

    int getRear() {
        if (isEmpty()) return -1;
        return rear->data;
    }

    bool isEmpty() {
        return (front == NULL);
    }

    int size() {
        return sz;
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.deque();
    q.enqueue(3);
    cout << q.getFront() << " " << q.getRear() << " " << q.isEmpty() << " " << q.size();

    return 0;
}
