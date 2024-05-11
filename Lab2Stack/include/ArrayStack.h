#include"Stack.h"

class ArrayStack : public Istack{
    private:
        int topindex;
        int maxstacksize;
        int *data;
    public:
        ArrayStack (int size): topindex(-1), maxstacksize(size), data(new int[size]){}
        ~ArrayStack(){}
        virtual bool push(int item);
        virtual void pop();
        virtual void top();
        virtual void isFull();
        virtual void isEmpty();
        void stackprint();
};
