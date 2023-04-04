https://codelearn.io/sharing/stack-va-queue-trong-cpp

struct Node {
    int data;
    Node* next;
};

node* top = NULL;

void Push(int data)
{
    Node* temp;
    temp = new Node;

    if (!temp)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }

    temp->data = data;
    temp->link = top;
    top = temp;
}
void Pop()
{
    Node* temp;

    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {
   
        temp = top;
        top = top->link;
        temp->link = NULL;
        delete temp;
    }
}
int isEmpty()
{
    return top == NULL;
}

int Peek()
{
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}


