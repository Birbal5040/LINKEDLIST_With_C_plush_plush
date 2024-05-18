#include<iostream>
using namespace std;
class node
{
    public:
    int y;
    node*next;
    node(int y)
    {
        this->y=y;
        this->next=NULL;
    }
   
};
 void display(node*head)
    {
        if(head==NULL) return;
        display(head->next);
        cout<<head->y<<" ";
    }
int main()
{
    node*a=new node(10);
    node*b=new node(20);
    node*c=new node(30);
    node*d=new node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    //cout<<d->y;
    display(b);
}