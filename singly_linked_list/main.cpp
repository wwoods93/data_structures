/**
 *  main.cpp
 */

#include "SinglyLinkedList.hpp"

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