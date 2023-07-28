#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct my_stack {
    Node *head;
    int sz;
    my_stack() {
        head = NULL;
        sz = 0;
    }

    void push(int x) {
        Node *new_node = new Node(x);
        new_node->next = head;
        head = new_node;
        sz++;
    }

    void pop() {
        if (head == NULL) {
            cerr << "stack overflow";
            return;
        }
        Node *temp = head;
        head = head->next;
        sz--;
        delete(temp);
    }

    int peek() {
        if (head == NULL) {
            cerr << "stack underflow";
            return -1;
        }
        return head->data;
    }

    int size() {
        return sz;
    }

    bool isEmpty() {
        return (head == NULL);
    }
};

int main() {
    my_stack s;
    s.push(1);
    s.push(2);
    cout << s.peek();
    s.pop();
    s.push(3);
    cout << s.peek() << s.size() << s.isEmpty();

    return 0;
}
