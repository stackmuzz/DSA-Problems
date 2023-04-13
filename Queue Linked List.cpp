#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
     public:
  int data;
  node*next;
  
 
  node(int val){
      data=val;
      next=NULL;
  }
  
    
};


class queue1 {
  node* front;
  node* back;
  public:
  queue1(){
      front=NULL;
      back=NULL;
  }
  
  void push(int x)
  {
      node* n=new node(x);
      if(front==NULL){
          back=n;
          front=n;
          return;
      }
      back->next=n;
      back=n;
      
  }
  void pop(){
      
      if(front==NULL)
      {
          cout<<"Queue is Empty"<<endl;
          return;
      }
      node*todelete=front;
      
      front=front->next;
      delete todelete;
      
  }
  int peek(){
      if(front==NULL)
      {
          cout<<"Queue is Empty"<<endl;
          return -1;
      }
      return front->data;
      
      
  }
  bool isEmpty(){
      if(front==NULL){
          return true;
      }
      return false;
      
  }
    
};

int main() {


queue1 q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
cout<<q.isEmpty()<<endl;


	return 0;
}
