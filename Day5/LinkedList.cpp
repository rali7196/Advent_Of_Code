#include "LinkedList.h"

LinkedList::LinkedList(){
    head = NULL;
}

Node* LinkedList::getHead(){
    return head;
}

void LinkedList::insertAtEnd(char data){
    Node* to_insert = new Node(data);
    if(head == NULL){
        head = to_insert;
    }
    else{
        Node* dummy = head;
        while(dummy->next){
            
        }
    }
}