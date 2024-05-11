#include"Stack.h"


class Node
{
    public:
        int info;
        Node * next;
        Node (int infoin) ;

};
class LinkedListStack
{
    private:
        Node *HEAD;
    public:
        LinkedListStack():HEAD(nullptr){}
        ~LinkedListStack() {}
        void isEmpty() ;
        bool push(int item);
        void pop();
        void top();
        void stackdisplay();
}; 