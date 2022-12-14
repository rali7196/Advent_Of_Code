#include <string>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node{
    public:
        char val;
        Node* next;
        Node(char data){
            val = data;
            next = NULL;
        }
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList();
        void insertAtEnd(char);
        void pop();
        Node* getHead();
        void printList();
};
#endif