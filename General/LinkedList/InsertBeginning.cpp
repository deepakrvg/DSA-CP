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

Node* insert_beginning(Node *head, int x) {
    Node* new_node = new Node(x);
    new_node->next = head;
    return new_node;
}

Node* insert_end(Node* head, int x) {
    Node *new_node = new Node(x);
    if (head == NULL) {
        return new_node;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}

Node* delete_head(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    else {
        Node* temp = head->next;
        delete head;
        return temp;
    }

}

Node* delete_tail(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    Node* last = temp->next;
    delete last;
    temp->next = NULL;
    return head;
}

Node* insert_at_pos(Node* head, int index, int x) {
    Node *new_node = new Node(x);
    Node *temp = head;
    if (index == 1) {
        new_node->next = head;
        return new_node;
    }
    for (int i = 0; i < index - 2 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        return head;
    }

    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}

Node* insert_sorted(Node *head, int x) {
    Node *new_node = new Node(x);
    Node *temp = head;
    if (head == NULL) {
        return new_node;
    }
    if (x < new_node->data) {
        new_node->next = head;
        return new_node;   
    }
    while (temp->next != NULL && x > temp->next->data) {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}

void print_linkedlist(Node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n;
    cin >> n;

    Node *head = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        head = insert_end(head, x);
    }

    int x;
    cin >> x;
    head = insert_sorted(head, x);
    print_linkedlist(head);

    return 0;
}
