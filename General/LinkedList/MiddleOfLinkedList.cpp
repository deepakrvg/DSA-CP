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

void print_ll(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int middle(Node* head) {
    if (head == NULL) {
        return -1;
    }
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
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
    // print_ll(head);
    cout << middle(head);

    return 0;
}
