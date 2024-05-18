#include<iostream>
using namespace std;
class Node
{   public:
    int val;
    Node*next;
    Node(int val)
    {
        this->val=val;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);
    Node f(60);
    //forming ll
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    e.next=&f;
    f.next=NULL;
   Node team=a;
   while(1)
   {
    cout<<team.val<<" ";
    if(team.next==NULL) break;
    team=*(team.next);
   }
}