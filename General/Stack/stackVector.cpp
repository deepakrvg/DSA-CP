#include <bits/stdc++.h>
using namespace std;

struct my_stack {
    vector<int> v;
    void push(int x) {
        v.push_back(x);
    }
    
    void pop() {
        if (v.size() != 0) {
            v.pop_back();
        }
    }

    int peek() {
        if (v.size() != 0) {
            return v.back();
        }
        return -1;
    }

    int size() {
        return v.size();
    }

    bool isEmpty() {
        return v.empty();
    }
};

int main() {
    my_stack s, p;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.peek();
    s.pop();
    cout << s.peek();
    cout << s.isEmpty();
    cout << s.size();
    p.push(5);
    cout << "p: " << p.peek();

    return 0;
}

