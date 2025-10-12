#include<bits/stdc++.h>
using namespace std;
class Node
{  public:
    int data;
    Node * next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertatend(Node *& head , int value)
{
    Node*newNode = new Node(value);
    Node*tail = NULL;

    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=newNode;
    tail=newNode;
}
void deleteatpostion(Node*& head,int pos)
{  Node*tail = NULL;
    Node*temp = head;
    Node * prev = NULL;
    int count=1;
    if(head==NULL || pos<=0)
    {   cout<<"POS in invalid or empty list\n";
        return;
    }
    if(pos==1)
    {
        Node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
   
    while(temp!=NULL && count<pos)
    {
        prev = temp;
        temp= temp->next;
        count++;
    }

    if(temp== NULL)
    {
        cout<<"POSITION OUT OF RANGE\n";
        return;
    }
    prev->next = temp->next;
    delete temp;

}
void printlist(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data << "->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int main()
{
    Node * head = NULL;
    
    int n;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        insertatend(head , value);
    }
    deleteatpostion(head,6);
    printlist(head);
}
