#include <bits/stdc++.h>

using namespace std;


class node {
  
  public: 
  int data;
  node* next;
  node* prev;
  
  node(int val)
  {
     data=val;
     next=NULL;
     prev=NULL;
  }
};


void insertAtHead(node* &head,int val)
{
    node*n=new node(val);
    n->next=head;
    if(head!=NULL){
       head->prev=n;  
    }
   
    head=n;
    
}

void insertAtTail(node* &head, int val)
{
    
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node*n=new node(val);
    node*temp=head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
    n->prev=temp;
}

void print(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    
    cout<<endl;
}


void deletion(node* &head,int pos)
{
    if(pos==1)
    {
       
     node* todelete=head;
        head=head->next;
        head->prev=NULL;
        
        delete todelete;
       return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt!=pos && temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;
    delete temp;
}


int main()
{
    node* head=NULL;
    insertAtTail(head,1);
     insertAtTail(head,2);
      insertAtTail(head,3);
       insertAtTail(head,4);
       
       print(head);
       insertAtHead(head,5);
       print(head);
       deletion(head,1);
       
       print(head);
    
    return 0;
}



