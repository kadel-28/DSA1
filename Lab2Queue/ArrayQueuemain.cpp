#include<iostream>
#include"Queue.h"
#include"ArrayQueue.h"

int main()
{
    ArrayQueue *q=new ArrayQueue(5);
    q->isEmpty();
    q->enqueue(56);
    q->enqueue(67);
    q->enqueue(12);
    q->enqueue(23);
    q->enqueue(48);
    q->queueprint();
    q->isFull();
    q->dequeue();
    q->dequeue();
    q->displayfront();
    q->displayrear();
    q->isFull();
    q->dequeue();
    q->dequeue();
    q->dequeue();
    q->isEmpty();
    return 0;
}