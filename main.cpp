#include <iostream>
#include "stack.h"

int main()
{
    stack s;
    s.IsEmpty();
    s.Push(5);
    s.Push(6);
    s.Push(7);
    s.Push(8);
    s.Push(9);
    s.Push(10);
    s.Top();
    s.Print();
    s.Pop();
    s.Top();
    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    s.Top();

    return 0;
}
