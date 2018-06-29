#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 101
#include <iostream>
using namespace std;

class stack
{
private:
    int A[MAX_SIZE];
    int top;
public:
    stack();
    void Push(int);
    void Pop();
    void Top();
    int IsEmpty();
    void Print();

};

#endif // STACK_H
