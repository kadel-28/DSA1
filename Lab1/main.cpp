#include<iostream>
#include"LinkedList.h"


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