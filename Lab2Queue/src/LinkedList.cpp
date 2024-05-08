#include<iostream> //header file for standard innput and output
#include"LinkedList.h"
//node class to create node for linked list

Node::Node(int infoin) {
    info = infoin;
    next=nullptr;
}

LinkedList::LinkedList (){//list constructor for initialization of head and tail pointers
    HEAD = nullptr;
    TAIL = nullptr;
} 
LinkedList::~LinkedList(){}
bool LinkedList::isEmpty(){//checks for the emptiness of the list
    if (HEAD==NULL) {
            return true;}
    else {
            return false;}
}
void LinkedList::addtoHead(int data){//adds data from head
    Node *t= new Node(data);
    t->info =data;
    t->next=HEAD;
    HEAD=t;
    if (TAIL==NULL) TAIL=t;
}
void LinkedList::addtoTail(int data){//add data from tail
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
void LinkedList::add(int data, Node* pred){//adds data to a specific place when predecessor node is provided
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
void LinkedList::removefromHead(){//removes data at head position
    if (!isEmpty())
    {
        Node *t=HEAD;
        HEAD=t->next;
        delete t;
        if (HEAD==NULL) TAIL=NULL;
    }
    else std::cout<<"Is Already Empty"<<std::endl;
}
void LinkedList::removefromTail(){//removesdata at tail position
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
void LinkedList::remove(int data){// removes the data that has been selected
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
bool LinkedList::search(int data){// searches for the exostence of the data, returns 1 if found
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
bool LinkedList::retrieve(int data, Node* dataOutPtr){//it retrives the data to the provided pointer and returns operation status
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
void LinkedList::traverse(){
    Node *t=HEAD;
    while (t->next!=NULL)
    {
        t=t->next;
    }
}
void LinkedList::printlist()// it displays the data in the list
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
