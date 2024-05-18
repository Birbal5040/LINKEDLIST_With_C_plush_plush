#include<iostream>
using namespace std;
class node
{
  public:
  int val;
  node*next;
  node(int val)
  {
    (*this).val=val;
    this->next=NULL;
  }
};
class linked
{  public:
  node*head;
  node*tail;
  int size;
  linked()
  {
    head=tail=NULL;
    size=0;
  }
  void insertatend(int val)
  {
    node*teap=new node(val);
    if(size==0)
    {
      head=tail=teap;
      
    }
    else{
      tail->next=teap;
      tail=teap;
      
    }
    size++;
  }
  void dis()
{   
  node*teap=head;
  while(teap!=NULL) 
  {
  cout<<teap->val<<" ";
   teap=teap->next;
   
  }
  
}

};

int main()
{
 linked ll;
 ll.insertatend(20);
 ll.insertatend(30);
 ll.insertatend(40);
 ll.dis();
 cout<<endl;
cout<<ll.size<<endl;
 
  }