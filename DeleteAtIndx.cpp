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
    void InsertAtTail(int val)
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
    void InsertAtHead(int val)
    {    
         node*teap=new node(val);
        if(size==0) head=tail=teap;
        else{
            teap->next=head;
            head=teap;
        }
        size++;
    }
void InsertAtInd(int indx,int val)
{
    if(indx<0 || indx> size)
    {
        cout<<"  indx invalid "<<endl;
        return;
    }
   else if(indx==0)  InsertAtHead(val);
     else if(indx==size) InsertAtTail(val);
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
int GetAtInd(int ind)
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
void DeleteAtHead()
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
void DeleteAtTail()
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
void DeleteAtInd(int ind)
{
    if(ind==0) return DeleteAtHead();
    else if(ind==size-1) return DeleteAtTail();
    else if(ind<0 || ind>size)
    {
        cout<<"invalid indx"<<endl;
        return ;
    }
    else
    {
        node*teap=head;
       for(int i=0;i<=ind;i++)
       {
          teap=teap->next;
       }
       teap->next=teap->next->next;
      
    }
     size--;
}
};
int main()
{
    
    linkedlist ll;
    ll.InsertAtTail(10);
    ll.InsertAtTail(20);
    ll.InsertAtTail(40);
    ll.InsertAtTail(50);
    ll.InsertAtHead(60);
     ll.InsertAtHead(30);
    cout<<"size->"<<ll.size<<endl;
   ll. display();
   cout<<endl;
  ll. InsertAtInd(3,80);
  // ll. display();
  // cout<<endl;
 // cout<<ll.GetAtInd(4);
   //cout<<endl;
    ll. display();
    cout<<endl;
    ll.DeleteAtHead();
    ll.DeleteAtTail();
     ll. display();
     cout<<endl;
     cout<<ll.GetAtInd(4)<<endl;
      ll. display();
      cout<<endl;
    ll. DeleteAtInd(2);
      ll. display();
}