#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node*next;
    //constructor
    node(int value)
    {
        this->value=value;
        this->next=NULL;

    }
};
void display(node*head)
{
    node*teap=head;
    int size=0;
    cout<<"Linked List"<<endl;
    while(teap!=NULL)
    {
        cout<<teap->value<<" ";
        teap=teap->next;
       size++;
    }
    cout<<endl;
    cout<<"Size of linked list is"<<" "<<size<<endl;
    cout<<"Ll ptint by recursion"<<endl;
} 

void displayre(node*head)
{
    if(head==NULL) return;
     cout<<head->value<<" ";
    displayre(head->next);
   
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
    //cout<<d->value;
    display(a);
    displayre(a);
}
