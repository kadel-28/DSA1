#pragma once
#include<iostream>

class Istack
{
    public:
        Istack(){}
        ~Istack(){}
        virtual bool push(int item)=0;
        virtual void pop()=0;
        virtual void top()=0;
        virtual void isFull()=0;
        virtual void isEmpty()=0;
};