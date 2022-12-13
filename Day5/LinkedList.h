#include <string>

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
};