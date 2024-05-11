#include"Queue.h"
#include<iostream>

class Node
{
    public:
    int info;
    Node * next;
    Node (int infoin);
};

class LinkedListQueue
{
    private:
        Node *HEAD;
        Node *TAIL;
    public:
        LinkedListQueue(): HEAD(nullptr), TAIL(nullptr) {}
        ~LinkedListQueue(){}
        void enqueue(int item);
        void dequeue();
        void front();
        void rear();
        void isEmpty();
        void queuedisplay();
};