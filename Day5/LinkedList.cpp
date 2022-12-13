#include "LinkedList.h"

LinkedList::LinkedList(){
    head = NULL;
}

Node* LinkedList::getHead(){
    return head;
}

void LinkedList::pop(){
    if(!(head)){//segfault guarad
        return;
    }
    else{
        head = head->next;
    }

}

void LinkedList::insertAtEnd(char data){
    Node* to_insert = new Node(data);
    if(head == NULL){
        head = to_insert;
    }
    else{
        Node* dummy = head;
        while(dummy->next){
            dummy = dummy->next;
        }
        dummy->next = to_insert;
    }
}