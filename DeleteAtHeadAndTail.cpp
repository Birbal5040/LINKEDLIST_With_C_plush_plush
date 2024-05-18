#include<iostream>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class linkedlist
{    public:
    node*head;
    node*tail;
    int size;
    linkedlist()
    {
        head=tail=NULL;
        size=0;
    }
    void end(int val)
    {
        node*teap=new node(val);
        if(size==0) head=tail=teap;
        else
        {
        tail->next=teap;
        tail=teap;
        }
        size++;
    }
    void first(int val)
    {    
         node*teap=new node(val);
        if(size==0) head=tail=teap;
        else{
            teap->next=head;
            head=teap;
        }
        size++;
    }
void ind(int indx,int val)
{
   // node*teap=new node(val);
    if(indx<0 || indx> size)
    {
        cout<<"invalid "<<endl;
        return;
    }
   else if(indx==0)  first(val);
     else if(indx==size) end(val);
    else
    {   
         node*t=new node(val);
           node*teap=head;
        for(int i=0;i<indx-1;i++)
        {
          teap=teap->next;
        }
        t->next=teap->next;
        teap->next=t;
    }
    size++;
}
int getind(int ind)
{
    if(ind<0 || ind>size) 
    {
        cout<<"invalid"<<endl;
        return -1;
    }
   else if(ind==0) return head->val;
   else if(ind==size-1) return tail->val;
   else
   {
      node*teap=head;
      for(int i=1;i<=ind;i++)
      {
        teap=teap->next;
      }
      return teap->val;
   }
   
}
   void display()
{
    node*teap=head;
    while(teap!=NULL)
    {
        cout<<teap->val<<" ";
        teap=teap->next;
    }
}
void dehead()
{
    if(size==0) 
    {
        cout<<"empty"<<endl;
        return;
    }
    else
    {
        head=head->next;
    }
    size--;
}
void detail()
{
    if(size==0) 
    {
        cout<<"empty"<<endl;
        return;
    }
   else
   {
    node*teap=head;
    while(teap->next!=tail)
    {
        teap=teap->next;
    }
    teap->next=NULL;
    tail=teap;

   }
   size--;
}

};
int main()
{
    
    linkedlist ll;
    ll.end(10);
    ll.end(20);
    ll.end(40);
    ll.end(50);
    ll.first(60);
     ll.first(30);
   // cout<<"size->"<<ll.size<<endl;
  // ll. display();
 //  cout<<endl;
  ll. ind(3,80);
   ll. display();
   cout<<endl;
  cout<<ll.getind(4);
   cout<<endl;
    ll. display();
    cout<<endl;
    ll.dehead();
    ll.detail();
     ll. display();

}