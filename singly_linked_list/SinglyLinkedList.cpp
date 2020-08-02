/**
 *  SinglyLinkedList.cpp
 */

#include <iostream>
#include "SinglyLinkedList.hpp"


        SinglyLinkedList::SinglyLinkedList()
        {
            head = NULL;
            tail = NULL;
        }
        SinglyLinkedList::~SinglyLinkedList()
        {
            Node *nodePtr;
            Node *nextNode;
            nodePtr = head;
            std::cout << "Destroying all nodes...\n";
            while (nodePtr != nullptr)
            {
                nextNode = nodePtr->next;
                delete nodePtr;
                nodePtr = nextNode;
            }
            std::cout << "All nodes destroyed.\n";
        }
        void SinglyLinkedList::insertNode(int newData)
        {
            Node *tmp = new Node;
            tmp->data = newData;
            tmp->next = NULL;

            if (head == NULL)
            {
                head = tmp;
                tail = tmp;
            }
            else
            {
                tail->next = tmp;
                tail = tail->next;
            }
        }
        int SinglyLinkedList::removeFirstNode()
        {
            int removeThis;
            if (!head)
                return 0;
            Node *nodePtr;
            nodePtr = head->next;
            removeThis = head->data;
            delete head;
            head = nodePtr;
            return removeThis;
        }
        void SinglyLinkedList::print()
        {
            Node *nodePtr;
            nodePtr = head;
            std::cout << "Contents of linked list:\n";
            while (nodePtr != nullptr)
            {
                std::cout << nodePtr->data << ' ';
                nodePtr = nodePtr->next;
            }
            std::cout << '\n';
        }

int main()
{
    SinglyLinkedList a;
    a.insertNode(1);
    a.insertNode(2);
    a.print();
    a.removeFirstNode();
    a.insertNode(3);
    a.print();
    return 0;
}