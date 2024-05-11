#include<iostream>
#include"Stack.h"
#include"ArrayStack.h"

int main()
{
    ArrayStack *s= new ArrayStack(5);
    s->isEmpty();
    s->push(10);
    s->push(9);
    s->push(12);
    s->push(13);
    s->push(17);
    s->stackprint();
    s->isFull();
    s->pop();
    s->pop();
    s->top();
    s->isFull();
    s->pop();
    s->pop();
    s->pop();
    s->isEmpty();
    return 0;
}