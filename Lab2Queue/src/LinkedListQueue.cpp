#include"LinkedListQueue.h"
#include<iostream>

Node::Node(int infoin)
{
    info=infoin;
    next=nullptr;
}
void LinkedListQueue::enqueue(int item)
{
    Node *t= new Node(item);
    if (TAIL==nullptr) 
    {
        HEAD=t;
        t->info=item;
        t->next=nullptr;
        TAIL=t;
    }
    else 
    {
        t->info=item;
        t->next=nullptr;
        TAIL->next=t;
        TAIL=t;
    }
}
void LinkedListQueue::dequeue()
{
    if (HEAD==nullptr) std::cout<<"Queue is Empty"<<std::endl;
    else
    {
        Node *t=HEAD;
        std::cout<<"The dequeued Element is "<<t->info<<std::endl;
        HEAD=t->next;
        delete t;
        if (HEAD==NULL) TAIL=NULL;
    }
}
void LinkedListQueue::isEmpty()
{
    if (HEAD==nullptr) std::cout<<"Queue is Empty"<<std::endl;
    else std::cout<<"Queue is not Empty"<<std::endl;
}
void LinkedListQueue::front()
{
    if (HEAD==nullptr) std::cout<<"Queue is Empty"<<std::endl;
    else std::cout<<"The front element is "<<HEAD->info<<std::endl;
}
void LinkedListQueue::rear()
{
    if (HEAD==nullptr) std::cout<<"Queue is Empty"<<std::endl;
    else std::cout<<"The rear element is"<<TAIL->info<<std::endl;
}
void LinkedListQueue::queuedisplay()
{   Node*t=HEAD;
    if (HEAD==nullptr) std::cout<<"The Queue is Empty"<<std::endl;
    else
    {
    std::cout<<"The Queue is "<<std::endl;
    while (t!=nullptr)
    {
        std::cout<<t->info<<"\t";
        t=t->next;
    } 
    std::cout<<std::endl;
    }
}
