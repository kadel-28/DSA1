#include"../include/ArrayStack.h"
#include<iostream>

void ArrayStack::isEmpty()
{
    if (topindex ==-1) std::cout<<"Stack is Empty"<<std::endl;
    else std::cout<<"Stack is Not Empty"<<std::endl;
}

void ArrayStack::isFull()
{
    if (topindex==maxstacksize-1) std::cout<<"Stack is Full"<<std::endl;
    else std::cout<<"Stack is Not full"<<std::endl;;
}

void ArrayStack::stackprint()
{

    if (topindex==-1) std::cout<<"Stack is Empty"<<std::endl;
    else
    {
        std::cout<<std::endl;
        std::cout<<"Your Stack is"<<std::endl;
        for (int i=0;i<=topindex;i++)
        {
            std::cout<<data[i]<<"\t";
        }
        std::cout<<std::endl;std::cout<<std::endl;
    }
    
}
void ArrayStack::top()
{
    if (topindex==-1) std::cout<<"Stack is empty";
    else std::cout<<"The Top element is  "<<data[topindex]<<std::endl;
}
bool ArrayStack::push(int item)
{
    if (topindex==maxstacksize-1) return false;
    else {
        topindex++;
        data[topindex]=item;
        return true;
    }
}
void ArrayStack::pop()
{
    if (topindex==-1)
        std::cout<<"Stack is Empty"<<std::endl;
    else 
    {
        std::cout<<"The popped element is  "<<data[topindex]<<std::endl;
        topindex--;
    }
}