 //header file for standard innput and output

//node class to create node for linked list
class Node {
    private:

    public:
        int info;
        Node* next;
        //constructor to initialize new nodes
        Node(int infoin) ;

};

class LinkedList {
    private://storing the head and the tail pointer
        Node * HEAD;
        Node * TAIL;
    public:
        LinkedList ();
        ~LinkedList();
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
        void printlist();// it displays the data in the lis;      
};