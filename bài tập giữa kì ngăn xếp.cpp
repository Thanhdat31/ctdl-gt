#include <iostream>
using namespace std;

constexpr auto MAX = 30;

class Stack {
    int top;
public:
    int a[MAX]; 

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        return false;
    }
    else {
        a[++top] = x;
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    Stack s;
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) s.push(arr[i]);
    cout << "Phan tu dau tien trong stack: " << s.pop() << endl;
    cout << "Cac phan tu con lai trong stack: ";
    while (!s.isEmpty()) {
        cout << s.pop() << " ";
    }

    return 0;
}
