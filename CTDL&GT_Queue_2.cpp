#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front, * rear;
public:
   
    Queue() {
        front = rear = NULL;
    }

    
    bool isEmpty() {
        return (front == NULL);
    }

   
    void enQueue(int x) {
        Node* temp = new Node;
        temp->data = x;
        temp->next = NULL;

      
        if (rear == NULL) {
            front = rear = temp;
        }
        else {
           
            rear->next = temp;
            rear = temp;
        }
    }

    
    void deQueue() {
      
        if (front == NULL) {
            return;
        }
        else {
            Node* temp = front;
            front = front->next;

           
            if (front == NULL) {
                rear = NULL;
            }

            delete temp;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
        }
        else {
            Node* temp = front;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

// Hàm main
int main() {
    Queue q;
    q.enQueue(5);
    q.enQueue(10);
    q.enQueue(15);
    q.enQueue(20);

    cout << "Queue sau khi thêm 4 phần tử: ";
    q.display();

    q.deQueue();
    q.deQueue();

    cout << "Queue sau khi xóa 2 phần tử: ";
    q.display();

    return 0;
}
