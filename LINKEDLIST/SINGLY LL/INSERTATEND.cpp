#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
void insertatend(Node*& head , int value)
{
    Node * newNode = new Node(value);
    Node * tail = NULL;
    if(head== NULL)
    {
        head= newNode;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;
    tail=newNode;
}
void printlist(Node*head)
{
    Node*temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{
    Node* head = NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>> value;
        insertatend(head,value);
    }
    printlist(head);
}


//second variant
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node (int value)
    {
        data=value;
        next=NULL;
    }
};
void insertatend(Node *& head, Node *& tail , int value)
{
    Node * newone = new Node(value);

    if(head==NULL)
    {
        head=tail=newone;
        return;
    }
    tail->next=newone;
    tail=newone;
}
void printlinkedlist(Node *& head)
{
    Node * tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->data <<"->";
        tmp=tmp->next;
    }
    cout<<"NULL";

    cout<<endl;
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    
    for(int i=1; i<100; i++)
    {
          int value=i;
        insertatend(head, tail,value);
    }
    printlinkedlist(head);
}
