/**
 *  SinglyLinkedList.cpp
 */

#include <iostream>

template <class T>
class SinglyLinkedList
{
    private:
        struct Node
        {
            T data;
            Node *next;
        };

        Node *head;
        Node *tail;

    public:
        SinglyLinkedList();
        ~SinglyLinkedList();
        void insertNode(T newData);
        T removeFirstNode();
        void print();
};

template <class T>
SinglyLinkedList<T>::SinglyLinkedList()
{
    head = NULL;
    tail = NULL;
}
template <class T>
SinglyLinkedList<T>::~SinglyLinkedList()
{
    Node *nodePtr;
    Node *nextNode;
    nodePtr = head;
    std::cout << "Destroying all nodes\n";
    while (nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
    std::cout << "All nodes destroyed\n";
}

template <class T>
void SinglyLinkedList<T>::insertNode(T newData)
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

template <class T>
T SinglyLinkedList<T>::removeFirstNode()
{
    T removeThis;
    if (!head)
        return 0;
    Node *nodePtr;
    nodePtr = head->next;
    removeThis = head->data;
    delete head;
    head = nodePtr;
    return removeThis;
}

template <class T>
void SinglyLinkedList<T>::print()
{
    Node *nodePtr;
    nodePtr = head;
    std::cout << "Contents of linked list:\n";
    while (nodePtr != nullptr)
    {
        std::cout << nodePtr->data << ' ';
        nodePtr = nodePtr->next;
    }
    std::cout << std::endl;
}
