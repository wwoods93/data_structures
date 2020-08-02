/**
 *  main.cpp
 */

#include <iostream>
#include "SinglyLinkedList.cpp"

int main()
{
    SinglyLinkedList<int> a;
    a.insertNode(1);
    a.insertNode(2);
    a.print();
    a.removeFirstNode();
    a.insertNode(3);
    a.print();
    return 0;
}