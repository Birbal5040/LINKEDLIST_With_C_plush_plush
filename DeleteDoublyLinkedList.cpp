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
    int size;
    node*head;
    node*tail;
    dl( )
    {
        size=0;
        head=tail=NULL;
    }
    void inserttail(int val)
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
    void inserthead(int val)
    {
        if(size==0) head=tail=NULL;
        else
        {
            node*temp=new node(val);
            temp->next=head;
            head->pre=temp;
            head=temp;
            size++;
        }
    }
    void insertindx(int indx,int val)
    {
        if(indx<0 || size<indx) cout<<"invalid indx"<<endl;
       else if(size==0) inserthead(val);
        else if(size==indx-1) inserttail(val);
        else
        {
            node*temp=head;
            node*t=new node(val);
            if(indx<size/2)
            {
                for(int i=0;i<indx-1;i++)
                {
                     temp=temp->next;
                }
                
                t->next=temp->next;
                temp->next=t;
                t->pre=temp;
                t->next->pre=t;
                temp=t;
            }
            else
            {
                node*teamp=tail;
                for(int i=size;i>indx-1;i--)
                {
                     teamp=teamp->pre;
                }
                t->next=teamp->next;
                teamp->next=t;
                t->pre=teamp;
                t->next->pre=t;
                teamp=t;
            }
            size++;
        }

    }
    void deletehead()
    {   
        if(head==NULL) tail=NULL;
        else if(head!=NULL) head->pre=NULL;

        else if(size==0)
        {
            cout<<"Linked list is empty!"<<endl;
        }
        else
        {
        head=head->next;
        size--;
        }
    }
    void deletetail()
    {
        if(size==0)
        {
            cout<<"Linked List is empty!"<<endl;
        }
        else
        {
            node*temp=tail->pre;
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    void deleteindx(int indx)
    {
        if(indx<0 || indx>size)
        {
            cout<<"invalid indx!"<<endl;
        }
        else if(size==0) deletehead();
        else if(size==indx-1) deletetail();
        else
        {
            if(indx<size/2)
            {
                node*temp=head;
                for(int i=0;i<indx-1;i++)
                {
                    temp=temp->next;
                }
                temp->next=temp->next->next;
                temp->next->pre=temp;
            }
            else
            {
                node*t=tail;
                for(int i=size;i>indx-1;i--)
                {
                    t=t->pre;
                }
                t->next=t->next->next;
                t->next->pre=t;

            }
            size--;

        }
    }
    void disp()
    {
        node*temp=head;
       while(temp!=NULL)
       {
        cout<<temp->val<<" ";
        temp=temp->next;
       }
       cout<<endl;
    }
    int getvalue(int indx)
    {
        if(indx<0 || indx>size-1) 
        {
            cout<<"invalid indx!"<<endl;
        }
       else if(indx==0) return head->val;
        else if(indx==size-1) return tail->val;
        else
        {
            if(indx<size/2)
            {
                node*temp=head;
                for(int i=0;i<indx;i++)
                {
                    temp=temp->next;
                }
               return temp->val;
            }
            else
            {
                node*t=tail;
                for(int i=size;i>indx;i--)
                {
                    t=t->pre;
                }
                 return t->val;


            }
        }
        cout<<endl;

    }

};
int main()
{
    dl ll;
    ll.inserttail(10);
    ll.inserttail(20);
    ll.inserthead(30);
    ll.inserthead(40);
     ll.inserthead(50);
    ll.inserthead(60);
    ll.disp();
    ll.insertindx(2,400);
     
      ll.insertindx(4,500);
      ll.deletehead();
      ll.deletetail();
      ll.disp();
      cout<<"size->"<<ll.size<<endl;
      //ll.deleteindx(5);
      ll.disp();
      cout<<ll.getvalue(3)<<endl;
      cout<<ll.getvalue(8);


}