#include<iostream>
using namespace std;
int rear,front,max,queue_arr[];

void insert (int item)
{
    if(Isfull())
    {
        cout<<"Queue is overflow..\n";
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    rear+=1;
    queue_arr[rear]=item;
}
int Isfull(){
    if(rear==max-1)
        return 1;
    else
        return 0;
}
int delete()
{
    int item;
    if(Isempty())
    {
        cout<<"Queue is under flow..\n";
        exit(1);
    }
    item=queue_arr[front];
    front=front +1;
    return item;
}

int Isempty()
{
    if(front==-1 || front=rear+1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

void display()
{
    int i;
    if(Isempty())
    {
        cout<<"queue is empty..\n";
        return;
    }
    for (i=front; i<=rear;i++)
    {
        cout<<queue_arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int choice;
    cout<<" Enter any choice..\n"
        <<" 1. create a queue..\n"
        <<" 2. Insert data...\n"
        <<" 3. Delete data...\n"
        <<" 4. Display...\n"
        <<" 5. exit...\n";
}