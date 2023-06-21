#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};

Node *insert(Node *head, int x) {
    Node *temp = new Node(x);
    if (head == NULL) {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

int kth_node_from_end(Node *head, int k) {
    if (head == NULL) return -1;
    Node *first = head, *second = head;
    while (k--) {
        if (first == NULL) return -1;
        first = first->next;
    }
    while (first != NULL) {
        first = first->next;
        second = second->next;
    }
    return second->data;
}

int main() {
    int n;
    cin >> n;
    Node *head = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insert(head, x);
    }
    int k;
    cin >> k;
    cout << kth_node_from_end(head, k);

    return 0;
}
