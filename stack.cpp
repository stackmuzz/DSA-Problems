// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define n 100

class stack1  {
  int* arr;
  int top;
  
  public:
  // Constructor
  stack1()
  {
      arr=new int[n];
      top=-1;
  }
  
  //push operation
  
  void push(int x)
  {
      if(top==n-1)       //array is full
      {
          cout<<"Stack Overflow"<<endl;
          return;
      }
      top++;
      arr[top]=x;
      
  }
 //pop operation
 void pop() {
     if(top==-1)        //Stack is empty
     {
         cout<<"Stack Underflow"<<endl;  
         return;
     }
     top--;
     
 }
  int Top(){
      if(top==-1)
      {
          cout<<"No element in the stack"<<endl;
          return 0;
      }
      return arr[top];
      
  }
  
  bool empty(){
      
      
      return top==-1;
  }
  
  
};
int main() {
  stack1 st;
  st.push(1);
  st.push(2);
  st.push(3);
  cout<<st.Top()<<endl;
  st.pop();
  cout<<st.Top()<<endl;
  st.pop();
  st.pop();
  st.pop();
  cout<<st.empty()<<endl;

    return 0;
}