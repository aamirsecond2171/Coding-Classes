#include<iostream>
using namespace std;
int value;
struct node{
    int info;
    struct node *link;
};

struct node *createLL(struct node *start, int data)
{
    struct node *temp= new node;
    temp->info=data;
    temp->link=NULL;
    start=temp;
    return start;
}

void display(struct node *start)
{
    node *p=start;
        while(1){
            while (p->link!=NULL)
            {
                cout<<p->info<<" ";
                p=p->link;

            }
            if(p->link==NULL){
                cout<<p->info<<endl;
                return;}
            else if(p==NULL){
                cout<<"empty list!!!";
            }
        return ;
        }
}

struct node *insertatbeg(struct node *start,int data)
{
    struct node *temp = new node;
    temp->info=data;
    temp->link=start;
    start=temp;
    return start;
}

struct node *insertatend(struct node *start,int data)
{
    struct node *p=start;
    struct node *temp= new node;
    temp->info=data;
    temp->link=NULL;
    if(p==NULL){
        cout<<"Empty list";
    }
    while(p->link!=NULL){
        p=p->link;
    }
    p->link=temp;
    return start;
}

struct node *insertatplace(struct node *start,int data,int value)
{
    struct node *p=start;
    struct node *temp = new node;
    temp->info=value;
    if(p==NULL){
        cout<<"Empty List!!!"<<endl;
    }
    while(p->info!=data){
        p=p->link;
        if(p==NULL){
            break;
        }
    }
    if(p==NULL){
        cout<<"Item not Found"<<endl;
    }
    else{
        p=start;
        while(p->link->info!=data){
            p=p->link;
        }
        temp->link=p->link;
        p->link=temp;
    }
    return start;
}

void greatestsmallest(struct node *start)
{
    int grt,sml;
    node *p=start;
    if(p==NULL){
        cout<<"Empty List!!!"<<endl;
        return;
    }
    grt=p->info;
    sml=p->info;
    while(p!= NULL){
        if(p->info > grt){
            grt=p->info;
        }
        else if(p->info < sml){
            sml=p->info;
        }
        p=p->link;
    }
    cout<<"Greatest no. in the List = "<<grt<<endl;
    cout<<"Smallest no. in the List = "<<sml<<endl;
}

void sortingasd(struct node *start){
    struct node *p=start;
    struct node *q=start;
    if(p==NULL)
    {
        cout<<"Empty List!!!";
    }
    int s,nodes;
    nodes = countofnodes(start);
    q=q->link;
    for(int i=0;i<nodes;i++)
    {
        while(p!= NULL && q!= NULL)
        {
            if(p->info > q->info){
                s= p->info;
                p->info = q->info;
                q->info=s;
            }
            p=p->link;
            q=q->link;
        }
    }
}

int countofnodes(struct node *start){
    int count =0;
    struct node *p=start;
    if(p==NULL)
    {
        cout<<"Empty List!!!";
    }
    else
    {  
        while(p!=NULL)
        {
            count++;
            p=p->link;
        }
        return count;
    }
}

int main(){
    node *start=NULL;
    int data,choice,value,c;
    while(1)
    {
        cout<<"Enter any choice: "<<endl<<
        "1. create Linked list"<<endl<<
        "2. display"<<endl<<
        "3. add at begining"<<endl<<
        "4. add at last"<<endl<<
        "5. add at desired place"<<endl<<
        "6. Greatest and smallest"<<endl<<
        "7. Sort the list"<<endl<<
        "8. Count of nodes"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"enter data:.."<<endl;
                cin>>data;
                start= createLL(start,data);
                break;
            case 2:
                display(start);
                break;
            case 3:
                cout<<"enter data:.."<<endl;
                cin>>data;
                start= insertatbeg(start,data);
                break;
            case 4:
                cout<<"enter data:.."<<endl;
                cin>>data;
                start=insertatend(start,data);
                break;
            case 5:
                cout<<"enter the item in which data will be inserted :.."<<endl;
                cin>>data;
                cout<<"Enter the data which you want to insert :...."<<endl;
                cin>>value;
                start=insertatplace(start,data,value);
                break;
            case 6:
                greatestsmallest(start);
                break;
            case 7:
                sortingasd(start);
                break;
            case 8:
                c=countofnodes(start);
                cout<<" There are total "<<c<<" nodes in the list."<<endl;
                break;
            default:
                break;
        }
    }
}