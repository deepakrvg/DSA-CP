#include <bits/stdc++.h>
using namespace std;

struct Queue {
    int *arr;
    int front, cap, sz;
    Queue (int c) {
        cap = c;
        front = 0;
        sz = 0;
        arr = new int[c];
    }

    void enqueue(int x) {
        if (isFull()) return;
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        sz++;
    }

    void deque() {
        if (isEmpty()) return;
        front = (front + 1) % cap;
        sz--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return front;
    }

    int getRear() {
        if (isEmpty()) return -1;
        return (front + sz - 1) % cap;
    }

    bool isEmpty() {
        return (sz == 0);
    }

    bool isFull() {
        return (cap == sz);
    }

    bool size() {
        return sz;
    }

    int frontElement() {
        return arr[getFront()];
    }

    int backElement() {
        return arr[getRear()];
    }
};

int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.deque();
    q.enqueue(3);
    cout << q.getFront() << " " << q.getRear() << " " << q.isEmpty() << " " << q.isFull() << " " << q.size();
    cout << endl;
    cout << q.frontElement() << " " << q.backElement();

    return 0;
}
