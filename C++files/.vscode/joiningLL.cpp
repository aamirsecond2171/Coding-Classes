#include<iostream>
using namespace std;
struct node{
    int info;
    struct node *link;
};

struct node *createLL1(struct node *start1,int data){
    struct node *temp = new node;
    temp->info = data;
    temp->link = NULL;
    start1 = temp;
    return start1;
}

struct node *createLL2(struct node *start2,int data){
    struct node *temp = new node;
    temp->info = data;
    start2 = temp;
    return start2;
}

struct node *insert1(struct node *start1,int data){
    struct node *temp = new node;
    struct node *p =start1;
    temp->info= data;
    temp->link=NULL;
    if(p==NULL){
        cout<<"Empty list";
        return start1;
    }
    while(p->link!=NULL){
        p=p->link;
    }
    p->link=temp;
    return start1;
}

struct node *insert2(struct node *start2,int data){
    struct node *temp = new node;
    struct node *p =start2;
    temp->info= data;
    temp->link=NULL;
    if(p==NULL){
        cout<<"Empty list";
        return start2;
    }
    while(p->link!=NULL){
        p=p->link;
    }
    p->link=temp;
    return start2;
}

void display1(struct node *start1){
    node *p=start1;
    if(p==NULL){
        cout<<"Empty list";
        return;
    }
    cout<<"LL 1: ";
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->link;
    }
    cout<<endl;
}

void display2(struct node *start2){
    node *p=start2;
    if(p==NULL){
        cout<<"Empty list";
        return;
    }
    cout<<"LL 2: ";
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->link;
    }
    cout<<endl;
}

void joinAndDisplay(struct node *start1,struct node *start2){
    struct node *p= start1;
    struct node *q=start1;
    if(p==NULL || q==NULL){
        cout<<"joining not possible!!!"<<endl;
        return;
    }
    while(p->link!=NULL){
        p=p->link;
    }
    p->link=start2;
    cout<<"Joined List = ";
    while(q!=NULL){
        cout<<q->info<<" ";
        q=q->link;
    }
    cout<<endl;
}

int main(){
    struct node *start1 = NULL;
    struct node *start2 = NULL;
    int choice,data;
    while(1){
        cout<<"Enter your choice:- \n"
        <<"1. Create two Linked lists \n"
        <<"2. Insert data \n"
        <<"3. Display both Lists \n"
        <<"4. Join and display list \n"
        <<"5. Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<" Enter data for 1st List: ";
            cin>>data;
            start1=createLL1(start1,data);
            cout<<" Enter data for 2st List: ";
            cin>>data;
            start2=createLL1(start2,data);
            break;
        case 2:
            cout<<" Enter data for 1st List: ";
            cin>>data;
            start1=insert1(start1,data);
            cout<<" Enter data for 2nd List: ";
            cin>>data;
            start2=insert2(start2,data);
            break;
        case 3:
            display1(start1);
            display2(start2);
            break;
        case 4:
            joinAndDisplay(start1,start2);
            break;
        case 5:
            exit(1);
            break;
        default:
            break;
        }
    }  
}
