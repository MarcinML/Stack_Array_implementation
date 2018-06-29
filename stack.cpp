#include "stack.h"

stack::stack()
{
    top = -1;
}


void stack::Push(int x)
{
   if(top == MAX_SIZE-1)
    {
    cout<<"Stack is full"<<endl;
    return;
    }
    top++;
    A[top] = x;
}

void stack::Pop()
{
    if(top == -1)
    {
        cout<<"stack is already empty"<<endl;
    }
    top--;
}

void stack::Top()
{
    if(top == -1)
    {
        cout<<"stack is already empty"<<endl;
        return;
    }
    cout<<"On top of the stack is: " <<A[top]<<endl;
}

int stack::IsEmpty()
{
    return (top == -1);
}

void stack::Print()
{
    int i;
    if(top == -1)
    {
        cout<<"stack is already empty"<<endl;
    }
    for(i=0; i<=top; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
