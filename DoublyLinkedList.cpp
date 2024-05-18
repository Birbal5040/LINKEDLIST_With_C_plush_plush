#include<iostream>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node*pre;
    node(int val)
    {   
        this->val=val;
        this->next=NULL;
        this->pre=NULL;

    }
};
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void dis(node*tail)
{
    node*temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->pre;
    }
}
int main()
{
    node*a=new node(10);
    node*b=new node(20);
    node*c=new node(30);
    node*d=new node(40);
    node*e=new node(50);
    node*f=new node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->pre=e;
    e->pre=d;
    d->pre=c;
    c->pre=b;
    b->pre=a;
    display(a);
    cout<<endl;
    dis(f);
    

}