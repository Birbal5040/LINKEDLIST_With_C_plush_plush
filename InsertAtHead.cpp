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
  void insertathead(int val )
  {
    node*teap=new node(val);
    if(size==0)
    {
      head=tail=teap;
      
    }
    else{
      teap->next=head;
      head=teap;
      
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
 ll.insertathead(20);
 ll.insertathead(30);
 ll.insertathead(40);
 ll.dis();
 cout<<ll.size;
 ll.insertathead(80);
 cout<<endl;
 ll.dis();
 cout<<endl;
 cout<<ll.size;

}