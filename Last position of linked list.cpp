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


    cin>>a->data;
    cin>>b->data;
    cin>>c->data;

    a->next = b;
    b->next = c;
    c->next = NULL;

    node*head = a;
    node*temp= head;
    node*p = new node();
    p->data = 40;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=p;
    p->next=NULL;

    while(head!=NULL)
    {
       cout<<head->data<<"";
       head=head->next;
    }
    return 0;
}