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
    cout<<"Enter The Value of Search:";
    int value;
    cin>>value;

    while(head != NULL)
    {
        if(head->data==value)
        {
            cout<<"Value Found";
            break;
        }
        head=head->next;
    }
    return 0;
}
