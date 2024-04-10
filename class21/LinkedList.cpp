class Node {
    private:

    public:
        int info;
        Node* next;
        Node(int infoin, Node* next) {
            info = infoin;
            next=nullptr;
        }

};

class LinkedList {
    private:
        Node* HEAD;
        Node* TAIL;
    public:
        LinkedList (Node){}
        bool isEmpty();
        void addtoHead(int data);
        void addtoTail(int data);
        void add(int data, Node* pred);
        void removefromHead();
        void removefromTail();
        void remove(int data);
        bool search(int data);
        bool retrieve(int data, Node* dataOutPtr);
        void traverse();
        
};