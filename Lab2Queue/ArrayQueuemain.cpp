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
    q->isFull();
    q->enqueue(23);
    q->enqueue(48);
    q->queueprint();
    q->dequeue();
    q->dequeue();
    q->displayfront();
    q->displayrear();
    q->dequeue();
    q->isFull();
    q->dequeue();
    q->dequeue();
    q->isFull();
    q->isEmpty();
    return 0;
}