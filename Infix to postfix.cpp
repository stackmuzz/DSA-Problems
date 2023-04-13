#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int prec( char ch){
    
    if(ch=='^'){
        return 3;
    }
    else if (ch=='*' || ch=='/')
    return 2;
    else if(ch=='+'|| ch=='-')
    return 1;
    
    else return -1;       //when ch='(' or ')'
    
}

string infixToPostfix(string s)
{
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
        {
            res+=s[i];
        }
        
        else if (s[i]=='('){
            st.push(s[i]);
            
        }
        
        else if (s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
                
                
            }
            if(!st.empty())
            {
                st.pop();   // popping the ( 
            }
            
            
            
        }
        else{
            while( !st.empty() && (prec(st.top())>prec(s[i])) ) {
                res+=st.top();
                st.pop();
                
            }
            st.push(s[i]);  //adding the high precedence operator into the stack
        }
        
        
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();             //removing the elements in stack after string has been completely traversed
    }
    
    return res;
}


int main() {

cout<<infixToPostfix("(a-b/c)*(a/k-l)")<<endl;



	return 0;
}
