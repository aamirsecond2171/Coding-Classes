#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *link;
};
struct node *create(struct node *start,int data)
{
    node *tmp=new node;
    tmp->info=data;
    tmp->link=NULL;
    start=tmp;
    return start;
}
struct node *Addatbeg(struct node *start,int data)
{
    if(start==NULL)
    {
        cout<<"linked is an empty...\n";
        exit(1);
    }
    node *tmp=new node;
    tmp->info=data;
    tmp->link=start;
    start=tmp;
    return start;
}
void display(struct node *start)
{
    node *p;
    if(start==NULL)
    {
        cout<<"Linked list is an empty..\n";
        return;
    }
    p=start;
    cout<<"Linked list is ...\n";
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->link;
    }
    cout<<"\n";
}
int main()
{
    struct  node *start=NULL;
    int data,choice;
    while(1)
    {
        cout<<"1.for creating first node..\n";
        cout<<"2.for Adding at begining..\n";
        cout<<"3.for displaying single linked list..\n";
        cout<<"4.for adding at end"
        cout<<"5.for exit..\n";
        cout<<"Enter your choice ...\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter data to be inserted..\n";
                cin>>data;
                start=create(start,data);
                break;
            case 2:
                cout<<"Enter data to be inserted at the begining..\n";
                cin>>data;
                start=Addatbeg(start,data);
                break;
            case 3:
                display(start);
                break;
            
            case 5:
                exit(4);
        }
    }
    
}