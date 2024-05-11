#include<iostream>
#include"Queue.h"

class ArrayQueue: public Iqueue
{
    private:
        int front;
        int rear;
        int maxqueuesize;
        int *data;
    public:
        ArrayQueue(int size): front(-1), rear(-1), maxqueuesize(size), data(new int [size]) {}
        ~ArrayQueue() {}
        virtual bool enqueue(int item);
        virtual void dequeue();
        virtual void isEmpty();
        virtual void isFull();
        virtual void displayfront();
        virtual void displayrear();
        virtual void queueprint();
};