#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int* arr;
    int top;
    int capacity; 
public:
    Stack(int size = MAX_SIZE);
    ~Stack(); // Destructor
    void push(int x); 
    int pop(); 
    int peek(); 
    int size();
    bool isEmpty(); 
    bool isFull(); 
    void display(); 
};

Stack::Stack(int size) {
    arr = new int[size];
    capacity = size;
    top = -1;
}

Stack::~Stack() {
    delete[] arr;
}

void Stack::push(int x) {
    if (isFull()) {
        cout << "Stack is full\n";
        return;
    }
    arr[++top] = x;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return -1;
    }
    return arr[top--];
}

int Stack::peek() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return -1;
    }
    return arr[top];
}

int Stack::size() {
    return top + 1;
}

bool Stack::isEmpty() {
    return top == -1;
}

bool Stack::isFull() {
    return top == capacity - 1;
}

void Stack::display() {
    if (isEmpty()) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack: ";
    for (int i = top; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6); 
    s.display(); 
    cout << "Size of stack: " << s.size() << endl; 
    cout << "Top element: " << s.peek() << endl; 
    s.pop();
    cout << "After pop operation: ";
    s.display();
    return 0;
}
