#include<iostream>

class Istack
{
    public:
        Istack();
        ~Istack();
        virtual int push()=0;
        virtual int pop()=0;
        virtual int top()=0;
        virtual int isFull()=0;
        virtual int isEmpty()=0;
};