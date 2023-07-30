#include <bits/stdc++.h>
using namespace std;

struct Queue {
    int *arr;
    int cap;
    int sz;
    Queue(int c) {
        cap = c;
        sz = 0;
        arr = new int[c];
    }

    void enqueue(int x) {
        if (isFull()) return;
        arr[sz] = x;
        sz++;
    }
    
    void deque() {
        if (isEmpty()) return;
        for (int i = 0; i < sz - 1; i++) {
            arr[i] = arr[i + 1];
        }
        sz--;
    }

    int getFront() {
        if (!isEmpty()) {
            return arr[0];
        }
        return -1;
    }

    int getBack() {
        if (!isEmpty()) {
            return arr[sz - 1];
        }
        return -1;
    }

    bool isFull() {
        return (sz == cap);
    }

    bool isEmpty() {
        return (sz == 0);
    }

    int size() {
        return sz;
    }
};

int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.deque();
    q.enqueue(3);
    cout << q.getFront() << " " << q.getBack() << " " << q.isEmpty() << " " << q.isFull() << " " << q.size();

    return 0;
}
