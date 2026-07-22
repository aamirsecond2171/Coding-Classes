#include<iostream>
using namespace std;
struct node{
    int info;
    node *link;
}

createLL1(struct node *start1,int data){
    struct node *temp = new node;
    temp->info=data;
    temp->link;
    start1=temp;
    return start1;
}

createLL2(struct node *start2,int data){
    struct node *temp = new node;
    temp->info=data;
    temp->link;
    start2=temp;
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

check(struct node *start1,struct node *start2){
    int count1,count2;
    struct node *p =start1;
    struct node *q =start2;
    
}