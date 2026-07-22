#include<iostream>
using namespace std;

struct node{
    int info;
    struct node *link;
};

struct node *create(struct node *start){
    struct node *header = new node;
    header->info=NULL;
    header->link=NULL;
    start = header;
    return start;
}

struct node *insertatend(struct node *start,int data){
    struct node *temp = new node;
    struct node *p=start;
    temp->info = data;
    while(p->link != NULL){
        p=p->link;
    }
    temp->link=p->link;
    p->link=temp;
    return start;
}

struct node *insertatpos(struct node *start,int data,int pos){
    struct node *temp = new node;
    struct node *p=start;
    int count=2;
    if(p==NULL){
        struct node *header = new node;
        start = header;
        struct node *temp = new node;
        temp->info = data;
        temp->link=NULL;
        header->link=temp;
        return start;
    }
    else{
        struct node *temp = new node;
        struct node *p=start;
        temp->info = data;
        while(count!=pos){
            ++count;
            p=p->link;
        }
        temp->link=p->link;
        p->link=temp;
        return start;
    }
}
void display(struct node *start)
{
    struct node *p=start;
    if(start==NULL)
    {
        cout<<"Linked list is an empty..\n";
        return;
    }
    cout<<"Linked list is ...\n";
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->link;
    }
    cout<<endl;
}
int main(){
    struct node *start= NULL;
    int pos,choice,data;
    while(1){
        cout<<"enter choice\n 1. create\n 2. insert at end\n 3.insert at position\n 4.display\n ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            start=create(start);
            break;
        case 2:
            cout<<"enter data:   "<<endl;
            cin>>data;
            start=insertatend(start,data);
            break;
        case 3:
            cout<<"enter the position to insert."<<endl;
            cin>>pos;
            cout<<"enter data:   "<<endl;
            cin>>data;
            start=insertatpos(start,data,pos);
            break;
        case 4:
            display(start);
            break;
        default:
            cout<<"Invalid choice!!! "<<endl;
            break;
        }
        
    
    }
}