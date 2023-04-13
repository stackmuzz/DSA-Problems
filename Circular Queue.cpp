#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define n 100

class queue1 {
  public:
  int *arr;
  int front;
  int rear;
  
  queue1(){
      arr=new int [n];
      front=-1;
      rear=-1;
  }
  
  
  void push(int x){
      if((front==0 && rear==n-1) ||( rear==(front-1)%(n-1)) ){
          cout<<"Queue is Full"<<endl;
          return;
      }
      else if(front==-1)  // first elmnt to push
      {
          front=0;
          rear=0;
          arr[rear]=x;
          return;
      }
      else if(rear==n-1 && front!=0) // rear has reached arrays end ,so make it 0
      {
          rear=0;
          arr[rear]=x;
          return;
      }
      else {
          rear++;
          arr[rear]=x;
          return;
      }
  }
  
  void pop(){
      
      if(front==-1){
          cout<<"Queue is Empty"<<endl;
      return;
          
      }
     
      else if(front==rear){      //Only 1 element in queue 
          front=-1;
          rear=-1;
          return;
      }
      else if(front==n-1){
          front=0;
          
          
      }
      else {
          
          front++;
      }
      
  }
    void display(){
        if(front==-1){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        if(front<=rear){
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" -> ";
            }
            cout<<endl;
        }
        if(front>rear){
            for(int i=front;i<n;i++){
                cout<<arr[i]<<" -> ";
            }
            for(int i=0;i<=rear;i++){
                cout<<arr[i]<<" -> ";
            }
            cout<<endl;
        }
    }
    
};

int main() {


queue1 q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.display();
q.pop();
q.display();


	return 0;
}


/*
o/p
1 -> 2 -> 3 -> 4 -> 5 -> 
2 -> 3 -> 4 -> 5 -> 



*/