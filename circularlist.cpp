#include<iostream>
using namespace std;

struct node
{   int info;
    struct node *link;
};
struct node *last = NULL;

struct node *createnode(struct node *last, int data)
    {
	struct node *temp;
	temp = new node;
	temp->info=data;
	last = temp;
	last->link=last;
	return last;
    }

int main(){
    

}
