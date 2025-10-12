#include<bits/stdc++.h>
using namespace std;

class Node
{  public:
    int data;
    Node*next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertatend(Node *& head , int value)
{
    Node* newNode = new Node(value);
    Node*tail = newNode;

    if(head== NULL)
    {
        head=newNode;
        return;
    }
    Node*temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;
    tail=newNode;
}

void printlist(Node*& head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data << "->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
void deleteaftervalue(Node*& head , int value)
{   Node*temp=head;
    Node*prev = NULL;
    if(head== NULL)
      return;


    while(temp!=NULL && temp->data!=value)
    {   
        temp=temp->next;

    }

    if(temp==NULL || temp->next==NULL)
    {
        cout<<"No node to delete after"<<endl;
        return;
    }
    Node*delnode=temp->next;
    temp->next=temp->next->next ;
    delete delnode;
}
int main()
{
    Node*head = NULL;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int value;
        cin >> value;

        insertatend(head , value);
    }
    deleteaftervalue(head,30);
    printlist(head);
}
