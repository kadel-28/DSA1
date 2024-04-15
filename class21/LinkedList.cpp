#include<iostream> //header file for standard innput and output

//node class to create node for linked list
class Node {
    private:

    public:
        int info;
        Node* next;
        //constructor to initialize new nodes
        Node(int infoin) {
            info = infoin;
            next=nullptr;
        }

};

class LinkedList {
    private://storing the head and the tail pointer
        Node * HEAD;
        Node * TAIL;
    public:
        LinkedList (){//list constructor for initialization of head and tail pointers
            HEAD = nullptr;
            TAIL = nullptr;
        } 
        ~LinkedList(){}
        bool isEmpty(){//checks for the emptiness of the list
            if (HEAD==NULL) {
            return true;}
            else {
            return false;}
        }
        void addtoHead(int data){//adds data from head
            Node *t= new Node(data);
            t->info =data;
            t->next=HEAD;
            HEAD=t;
            if (TAIL==NULL) TAIL=t;
        }
        void addtoTail(int data){//add data from tail
            Node *t= new Node(data);
            if (TAIL==NULL) 
            {
                HEAD=t;
                t->info=data;
                t->next=NULL;
                TAIL=t;
            }
            else 
            {
                t->info=data;
                t->next=NULL;
                TAIL->next=t;
                TAIL=t;
            }
        }
        void add(int data, Node* pred){//adds data to a specific place when predecessor node is provided
            if (isEmpty())
            {
                addtoHead(data);
            }
            else if (pred==TAIL)
            {
                addtoTail(data);
            }
            else 
            {
                Node *t= new Node(data);
                t->info=data;
                t->next= pred->next;
                pred->next = t;
            }
        }
        void removefromHead(){//removes data at head position
            if (!isEmpty())
            {
                Node *t=HEAD;
                HEAD=t->next;
                delete t;
                if (HEAD==NULL) TAIL=NULL;
            }
            else std::cout<<"Is Already Empty"<<std::endl;
        }
        void removefromTail(){//removesdata at tail position
            if (!isEmpty())
            {
                Node*del=TAIL;
                if (HEAD==TAIL) HEAD=TAIL=NULL;
                else
                {
                    Node * pred = HEAD;
                    while (pred->next != TAIL) {pred=pred->next;}
                    TAIL=pred;
                    TAIL->next=NULL;
                }
                delete del;
            }
            else std::cout<<"Already empty"<<std::endl;
        }
        void remove(int data){// removes the data that has been selected
            if (!isEmpty())
            {
                if (HEAD->info == data)
                {
                    removefromHead();
                }
                else if (TAIL->info==data)
                {
                    removefromTail();
                }
                else
                {//this is the remove part by traversing
                    Node*t=HEAD->next;
                    Node *pred=HEAD;
                    while (pred->next!=NULL)
                    {
                        if (t->info == data) break;
                        else 
                        {
                            pred=pred->next;
                            t=t->next;
                        }
                    }
                    if (t!=NULL)
                    {
                        pred->next=t->next;
                        delete t;
                    }
                    else
                    {
                        TAIL=pred;
                        delete t;
                    }
                }
            }
            else
            {
                std::cout<<"List is empty"<<std::endl;
            }
        }
        bool search(int data){// searches for the exostence of the data, returns 1 if found
            Node *t=HEAD;
            if (!isEmpty())
            {
            while (t->next!=NULL)
            {
               if (t->info == data)
               {
                    return true;
               } 
            }
            return false;//returns 0 if the data is not found
            }
        else std::cout<<"List is empty"<<std::endl;
        return false;
        }
        bool retrieve(int data, Node* dataOutPtr){//it retrives the data to the provided pointer and returns operation status
            if (!isEmpty())
            {
                Node *t=HEAD;
                while (t->next !=NULL && t->info!=data)
                {
                    t=t->next;
                }
                if (t==NULL) return false;
                else 
                {
                    dataOutPtr=t; 
                    return true;
                }
            }
            else 
            {
                std::cout<<"List is empty"<<std::endl;
                return false;
            }
        }
        void traverse(){
            Node *t=HEAD;
            while (t->next!=NULL)
            {
                t=t->next;
            }
        }
        void printlist()// it displays the data in the list
        {
            Node * t = HEAD;
            if (!isEmpty())
            {
                std::cout<<"The list is "<<std::endl;
                while (t!=NULL)
                {
                    std::cout<<t->info<<std::endl;
                    t=t->next;
                } 
            }
        }
        
};

int main(){
    LinkedList l1;//initialization of the list
    l1.addtoTail(7);
    l1.addtoHead(5);
    l1.addtoHead(6);
    l1.addtoTail(4);
    l1.addtoHead(2);
    l1.addtoTail(1);
    l1.addtoHead(9);
    l1.remove(6);
    l1.removefromHead();
    l1.removefromTail();
    l1.printlist();
    Node*outptr;
    std::cout<<"Retrieved data status \t"<<l1.retrieve(7, outptr)<<std::endl;
    
    return 0;

}