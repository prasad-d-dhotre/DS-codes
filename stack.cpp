#include<iostream>
#define MAX 5
using namespace std;
class Stack
{
  public:
  int top;
  int A[MAX];
  Stack()
  {
    top=-1;
  }
  
  void push(int value)
  {
    if(top==MAX-1)
      {
        cout<<"\n stack is overflow"<<endl;
      }
    else
    {
      top++;
      A[top]=value;
      cout<<value <<"is pushed  in the stack"<<endl;
    }
  }
  
  void pop()
  {
    if(top==-1)
    {
      cout<<"\n stack is underflow"<<endl;
    }
    else
    {
      cout<<"removed no. is" <<A[top]<<endl;
      top--;
    }
  }
  
  void display()
    {
      if(top==-1)
      {
        cout<<"stack is empty"<<endl;
      
      }
      else
      {
        for(int i=top; i>0 ; i--)
        {
          cout<<A[i]<<endl;
        }
      }
    }
  };

  int main()
  {
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.pop();
    s1.display();
  }
 








