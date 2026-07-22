#include<iostream>
using namespace std;
int value;
struct node{
    int info;
    struct node *link;
};
struct node *insert(struct node *start, int value)
{   
    struct node *temp = new node;
    struct node *p=start;
    temp->info = value;
    temp->link=NULL;
    if(start == NULL || value < start->info){
        temp->link=start;
        start = temp;
        return start;
    }
    while(p->link != NULL && p->link->info < value){ 
            p=p->link;
        }     
    temp->link = p->link;
    p->link = temp;
    return start;
}
void display(struct node *start)
{
    struct node *p=start;
    if(start==NULL)
    {
        cout<<"Linked list is an empty..\n";
        return;
    }
    cout<<"sorted list is ...\n";
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->link;
    }
    cout<<endl;
}
void search(struct node *start, int data){
    int position=0;
    if(start==NULL)
    {
        cout<<"Linked list is an empty..\n";
        return;
    }
    struct node *p=start;
    while(p!=NULL)
    {   
        position++;
        if(p->info == data){
            cout<<" Your value is in "<<position<<" position\n";
            break;
        }
        p=p->link;
    }
    if(p==NULL){
        cout<<"DATA NOT FOUND!!!!!!"<<endl;
    }
}

int main(){
    struct node *start= NULL;
    int value,choice,data;
    while(1){
        cout<<"enter choice\n 1. insert\n 2. display\n 3.search\n 4.exit\n ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"enter value:   "<<endl;
            cin>>value;
            start=insert(start,value);
            break;
        case 2:
            display(start);
            break;
        case 3:
            cout<<"enter the data to search."<<endl;
            cin>>data;
            search(start,data);
            break;
        case 4:
            exit(1);
        default:
            cout<<"Invalid choice!!! "<<endl;
            break;
        }
        
        
    }
}