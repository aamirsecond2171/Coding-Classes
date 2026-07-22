#include<iostream>
using namespace std;

struct node{
    int coff;
    int exp;
    struct node *link;
};

struct node *insert(int coff,int exp, struct node *start){
    struct node *temp = new node;
    struct node *p = start;
    temp->coff = coff;
    temp->exp = exp;
    temp->link= NULL;
    if(start == NULL || p->exp < exp ){
        temp->link=start;
        start=temp;
        return start;
    }
    while(p->link!=NULL && p->link->coff > exp){
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
    cout<<"Your arithmetic expression is ...\n";
    struct node *q = p->link;
    while(p->exp != 0 && p != NULL){
        if(q == NULL || q->coff < 0){
            cout<<p->coff<<"x^"<<p->exp;
        }
        else if(q->coff > 0){
            cout<<p->coff<<"x^"<<p->exp<<"+";
        }
        p=p->link;
        q=q->link;
    }
    if(p->exp == 0){
        cout<<p->coff;
    }
    cout<<endl;
}

int main(){
    struct node *start = NULL;
    int coff,choice,exp;
    while(1){
        cout<<"enter choice\n 1. insert\n 2. display\n 3.exit\n ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"enter coefficient:   "<<endl;
            cin>>coff;
            cout<<"enter power of variable:   "<<endl;
            cin>>exp;
            start=insert(coff,exp,start);
            break;
        case 2:
            display(start);
            break;
        case 3:
            exit(1);
        default:
            break;
        }
    }        
}
