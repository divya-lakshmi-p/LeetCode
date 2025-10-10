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
void insertatbegin(Node*& head , int value)
{
    Node * newNode = new Node(value);
    
    if(head== NULL)
    {
        head= newNode;
        return;
    }
    //Node*temp=head;

     newNode->next = head;
     head =newNode;
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
        insertatbegin(head,value);
    }
    printlist(head);
}
