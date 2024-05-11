#include"LinkedListQueue.h"

int main()
{
    LinkedListQueue q;
    q.isEmpty();
    q.enqueue(56);
    q.enqueue(67);
    q.enqueue(12);
    q.enqueue(23);
    q.enqueue(48);
    q.queuedisplay();
    q.dequeue();
    q.dequeue();
    q.front();
    q.rear();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.isEmpty();
    return 0;
}