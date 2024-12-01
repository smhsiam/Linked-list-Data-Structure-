#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
int main(){

    node*a = new node();
    node*b = new node();
    node*c = new node();
    node*p = new node();


    cin>>a->data;
    cin>>b->data;
    cin>>c->data;
    p->data=40;

    a->next = b;
    b->next = c;
    c->next = NULL;

    p->next = b->next;
    b->next=p;

    node*head = a;

    while(head!=NULL)
    {
       cout<<head->data<<"";
       head=head->next;
    }
    return 0;
}

