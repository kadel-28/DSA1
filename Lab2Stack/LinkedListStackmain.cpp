#include"Stack.h"
#include"LinkedListStack.h"
#include<iostream>

int main()
{
    LinkedListStack s;
    s.isEmpty();
    s.push(10);
    s.push(9);
    s.push(12);
    s.push(13);
    s.push(17);
    s.stackdisplay();
    s.pop();
    s.pop();
    s.top();
    s.stackdisplay();
    s.pop();
    s.pop();
    s.pop();
    s.isEmpty();
    return 0;
}