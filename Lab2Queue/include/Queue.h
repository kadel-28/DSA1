#pragma once
class Iqueue
{
    public:
    Iqueue() {}
    ~Iqueue() {}
    virtual bool enqueue(int item) =0;
    virtual void dequeue() =0;
    virtual void isEmpty()=0;
    virtual void isFull()=0;
    virtual void displayfront()=0;
    virtual void displayrear()=0;
};