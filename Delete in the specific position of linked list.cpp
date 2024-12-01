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

    cout<<endl<<"After Deleting";
    int key = 20;
    node*head=a;
    node*prev=NULL;
    node*current=head;

    while (current != NULL)
    {
        if(current->data==key)
    {
          prev->next=current->next;
          delete current;
          break;
    }
        prev=current;
        current=current->next;
    }
        node*temp=head;

        while(temp!=NULL)
    {
       cout<<temp->data<<"";
       temp = temp->next;
    }
    return 0;
}

