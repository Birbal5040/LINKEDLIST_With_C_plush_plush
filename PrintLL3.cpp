#include<iostream>
using namespace std;
class node
{   public:
   int x;
   node*next;
   node(int x)
   {
      this->x=x;
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
      
      cout<<teap->x<<" ";
      teap=teap->next;
      size++;
   }
   cout<<endl;
   cout<<"size of Linked List is"<<" "<<size;
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
   //cout<<d->x<<endl;
  display(a);
 

}
