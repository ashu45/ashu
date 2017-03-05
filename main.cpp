#include <iostream>

using namespace std;

class traverse
{
public:
    struct node
    {
        int x;
        node *next;
    }*head;
    void print()
    {
    node*temp,*prev,*temp1,*temp2;
    int n,p,info;
    head=new node();
    cout<<"Enter the head value";
    cin>>info;
    head->x=info;
    head->next=NULL;
    prev=head;
    cout<<"Enter the no of elements to be inserted";
    cin>>n;
    cout<<"Enter the elements to be inserted";
    for(int i=0;i<n;i++)
    {
        temp=new node();
        prev->next=temp;
        cin>>temp->x;
        temp->next=NULL;
        prev=temp;
    }
    temp1=head;
    temp2=head;
    cout<<"Enter the position of the node to be printed from the last";
    cin>>p;
    for(int j=0;j<p;j++)
    {
        temp1=temp1->next;
    }
    while(temp1!=NULL)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    cout<<"required value is:"<<temp2->x;
    }
};
int main()
{
    traverse t;
    t.print();
    return 0;
}
