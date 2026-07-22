#include <iostream>
using namespace std;

struct node
{
    int info;
    node *link;
};

node *top = NULL;

int Isempty();


void push(int data)
{
    node *temp = new node;
    temp->info = data;
    temp->link = top;
    top = temp;
}


int pop()
{
    if (Isempty())
    {
        cout << "Stack Underflow\n";
        exit(1);
    }
    node *temp = top;
    int item = temp->info;
    top = top->link;
    delete temp;
    return item;
}

int Isempty()
{
    return (top == NULL);
}

void display()
{
    if (Isempty())
    {
        cout << "Stack is empty\n";
        return;
    }
    node *ptr = top;
    while (ptr != NULL)
    {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    cout << endl;
}

void Greatest()
{
    if (Isempty())
    {
        cout << "Stack is empty\n";
        return;
    }
    node *ptr = top;
    int maxVal = ptr->info;
    while (ptr != NULL)
    {
        if (ptr->info > maxVal)
            maxVal = ptr->info;
        ptr = ptr->link;
    }
    cout << "Greatest element: " << maxVal << endl;
}


void Smallest()
{
    if (Isempty())
    {
        cout << "Stack is empty\n";
        return;
    }
    node *ptr = top;
    int minVal = ptr->info;
    while (ptr != NULL)
    {
        if (ptr->info < minVal)
            minVal = ptr->info;
        ptr = ptr->link;
    }
    cout << "Smallest element: " << minVal << endl;
}


int countNodes()
{
    int count = 0;
    node *ptr = top;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}


void topElement()
{
    if (Isempty())
    {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Top element: " << top->info << endl;
}


int main()
{
    int choice, data;
    while (1)
    {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Count";
        cout << "\n5. Top element";
        cout << "\n6. Greatest element";
        cout << "\n7. Smallest element";
        cout << "\n8. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            push(data);
            break;
        case 2:
            cout << "Deleted item = " << pop() << endl;
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Total elements: " << countNodes() << endl;
            break;
        case 5:
            topElement();
            break;
        case 6:
            Greatest();
            break;
        case 7:
            Smallest();
            break;
        case 8:
            exit(0);
        default:
            cout << "Invalid choice\n";
        }
    }
}
