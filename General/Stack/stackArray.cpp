#include <bits/stdc++.h>
using namespace std;

struct my_stack {
    int *arr;
    int cap;
    int top;
    my_stack(int n) {
        cap = n;
        arr = new int[cap];
        top = -1;
    }

    void push(int x) {
        if (top == cap - 1) {
            cerr << "stack overflow";
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cerr << "stack underflow";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cerr << "stack underflow";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top == -1);
    }

    int size() {
        return top + 1;
    }
};

int main() {
    my_stack s(5);
    s.push(5);
    s.push(20);
    s.push(15);
    cout << s.peek() << "\n";
    cout << s.size() << "\n";
    s.pop();
    cout << s.peek() << "\n";
    s.pop();
    cout << s.isEmpty()<< "\n";

    return 0;
}

