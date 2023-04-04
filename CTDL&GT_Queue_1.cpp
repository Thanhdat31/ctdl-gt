
void enQueue(int x)
{
    Node* temp;
    temp = new Node;

  
    if (!temp)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }
    temp->data = x;
    temp->next = NULL;

    if (rear == NULL)
    {
        front = rear = temp;
        return;
    }

   
    rear->next = temp;
    rear = temp;
}
void deQueue()
{
    
    if (front == NULL)
        return;

    Node* temp = front;
    front = front->next;
   
    if (front == NULL)
        rear = NULL;

    delete temp;
}