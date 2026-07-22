#include<iostream>
using namespace std;

struct node{
    int info;
    node* link;
};
struct node* create(struct node* start, int data){
    struct node* temp= new node;
    temp->info=data;
    temp->link=NULL;
    start=temp;
    return start;
}
display(struct node* start){
    node *p=start;
    if (p==NULL)
    {
        cout<<"Linked list is empty";
    }
    cout<<"List: ";
    while(p!= NULL){
        cout<<p->info<<" ";
        p=p->link;
    }
    cout<<endl;
}
int main()
{
    node* start= NULL;
    int data;
    switch (choise)
    {
    case 1:
        cout<<"Enter a data"<<endl;
        cin>>data;
        start=create(start,data);
        break;
    case 2:
        display(start);
        break;
    case 3:
    
    default:
        break;
    }
}
