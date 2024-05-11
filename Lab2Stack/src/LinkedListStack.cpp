#include"LinkedListStack.h"

Node::Node(int infoin)
{
   info=infoin;
   next=NULL;
}
void LinkedListStack::isEmpty()
{
    if (HEAD==NULL) std::cout<<"Stack is Empty"<<std::endl;
    else std::cout<<"Stack is not Empty"<<std::endl;
}

bool LinkedListStack::push(int item)
{
    Node *t= new Node(item);
    t->info =item;
    t->next=HEAD;
    HEAD=t;
    return true;
}

void LinkedListStack::pop()
{
    if (HEAD==NULL) std::cout<<"The Stack is Empty"<<std::endl;
    else
    {
        Node *t=HEAD;
        std::cout<<"The popped element is "<<t->info<<std::endl;
        HEAD=t->next;
        delete t;
    }
}

void LinkedListStack::top()
{
    if (HEAD==NULL) std::cout<<"The Stack is Empty"<<std::endl;
    else
    {
        std::cout<<"The top element of the Stack is "<<HEAD->info<<std::endl;
    }
}
void LinkedListStack::stackdisplay()
{
    Node * t = HEAD;
    if (HEAD==NULL) std::cout<<"The Stack is Empty"<<std::endl;
    else
    {
    std::cout<<"The stack is "<<std::endl;
    while (t!=NULL)
    {
        std::cout<<t->info<<"\t";
        t=t->next;
    } 
    std::cout<<std::endl;
    }
}