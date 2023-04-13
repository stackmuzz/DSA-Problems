#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define n 50 
   
 class queue1 {
     
     int*arr;
     int front;
     int back;
     
     public:
     queue1(){
         arr=new int[n];
         front=-1;
         back=-1;
     }
     
     void push(int x){
         if(back==n-1)          // check if array is full
         {
             cout<<"Queue Overflow"<<endl;
         }
         if(front==-1)          // check if queue is empty or 0 elements
         {
             front++;
         }
         back++;
         arr[back]=x;
         return;
     }
     
     void pop(){
          
          if(front==-1 || front>back)
          {
              cout<<"No elements in queue"<<endl;
              return;
          }
          front++;
          
     }
     int peek(){
          
          if(front==-1 || front>back)
          {
              cout<<"No elements in queue"<<endl;
              return -1;
          }
          return arr[front];
          
     }
     bool isEmpty(){
         if(front==-1|| front>back){
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
