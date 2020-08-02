/**
 *  SinglyLinkedList.hpp
 */

#include <iostream>

class SinglyLinkedList
{
    private:
        struct Node
        {
            int data;
            Node *next;
        };

        Node *head;
        Node *tail;

    public:
        SinglyLinkedList();
        ~SinglyLinkedList();
        void insertNode(int newData);
        int removeFirstNode();
        void print();
};