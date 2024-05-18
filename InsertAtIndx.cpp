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
class dl
{   
    public:
    node*head;
    node*tail;
    int size;
    dl()
    {
        head=tail=NULL;
        size=0;
    }
    void insertatend(int val)
    {   
          node*temp=new node(val);
        if(size==0) head=tail=temp;
        else
        {
          
            tail->next=temp;
            temp->pre=tail;
            tail=temp;
        }
        size++;

    }
    void insertatfirst(int val)
    {
        node*temp=new node(val);
        if(size==0) head=tail=temp;
        else
        {
            temp->next=head;
            head->pre=temp;
            head=temp;
        }
        size++;
    }
    void insertatindx(int indx,int val)
    {
       if(indx<0 || indx>size)
       {
         cout<<"your indx invalid"<<endl;
       }
       else if(indx==0) insertatfirst(val);
       else if(indx==size) insertatend(val);
       else
       {
        node*temp=head;
        node*t=new node(val);
        for(int i=1;i<=indx-1;i++)
        {
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        t->next->pre=t;
        t->pre=temp;
       }
       size++;
    }
    void display()
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;

        }
    }
      void dis()
    {
        node*temp=tail;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->pre;

        }
    }
};
int main()
{   
    dl ll;
   ll. insertatend(10);
   ll. insertatend(20);
   ll.  insertatend(30);
  ll.  insertatend(40);
   ll.  insertatend(50);
   ll. insertatend(60);
   ll.insertatfirst(300);
   ll. insertatend(350);
   ll. display();
   cout<<endl;
   cout<<"size of doubly ll---> "<<ll.size<<endl;
   cout<<"Reverse Dll "<<endl;
   ll.dis();
   cout<<endl;
   ll.insertatindx(3,500);
   cout<<"Dll "<<endl;
   ll. display();

}