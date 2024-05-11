#include"../include/ArrayQueue.h"
#include<iostream>

void ArrayQueue::isEmpty()
{
    if (rear==front) std::cout<<"Queue is Empty"<<std::endl;
    else std::cout<<"Queue is not Empty"<<std::endl;
}

void ArrayQueue::isFull()
{
    if (rear+1==maxqueuesize) std::cout<<"Queue is Full"<<std::endl;
    else std::cout<<"Queue is not Full"<<std::endl;
}
void ArrayQueue::displayfront()
{
    front++;
    if (rear==front) std::cout<<"The Queue is Empty"<<std::endl;
    else
    std::cout<<"The front element is "<<data[front]<<std::endl;
    front--;
}
void ArrayQueue::displayrear()
{
    if (rear==front) std::cout<<"Queue is Empty"<<std::endl;
    else std::cout<<"The rear element is "<<data[rear]<<std::endl;
}
bool ArrayQueue::enqueue(int item)
{
    if (rear==maxqueuesize-1) 
    {
        std::cout<<"The Queue is Full"<<std::endl;
        return false;
    }
    else
    {
        rear++;
        data[rear]=item;
        return true;
    }
}
void ArrayQueue::dequeue()
{
    front++;
    std::cout<<"The dequeued element is "<<data[front]<<std::endl;
    if (rear==maxqueuesize-1 && front==rear) {front=rear=-1;}
}
void ArrayQueue::queueprint()
{
    if (rear==front) std::cout<<"Queue is Empty"<<std::endl;
    else
    {
        std::cout<<"Your Queue is "<<std::endl;
        for (int i=0;i<=rear;i++)
        {
            std::cout<<data[i]<<"\t";
        }
        std::cout<<std::endl;
    }
}