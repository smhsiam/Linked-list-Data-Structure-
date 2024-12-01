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

    a->next = b;
    b->next = c;
    c->next = NULL;

    node*prev=a;

    while(prev->next->next!=NULL)
    {
        prev = prev->next;
    }
    delete prev->next;
    prev->next=NULL;

    cout<<endl<<"After Deleting->";
    node*head=a;

    while(head!=NULL)
    {
       cout<<head->data<<"";
       head=head->next;
    }
    return 0;
}

