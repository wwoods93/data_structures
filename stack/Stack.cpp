/**
 *  Stack.cpp
 */

#include <iostream>

template <class T>
class Stack
{
    private:
        T* stackArray;
        int top;
        int capacity;
        
    public:
        Stack(int size);
        ~Stack();
        bool push(T pushVal);
        T pop(T popVal = 0);
        bool isEmpty();
};

template <class T>
Stack<T>::Stack(int size)
{
    capacity = size;
    stackArray = new T[capacity];
    top = -1;
}

template <class T>
Stack<T>::~Stack()
{
    std::cout << "Destroying stack\n";
    delete []stackArray;
    std::cout << "Stack destroyed\n";
}

template <class T>
bool Stack<T>::push(T pushVal)
{
    if (top >= (capacity - 1))
    {
        std::cout << "Stack overflow\n";
        return false;
    }
    else
    {
        stackArray[++top] = pushVal;
        std::cout << pushVal << " pushed to stack\n";
        return true;
    }
}

template <class T>
T Stack<T>::pop(T popVal)
{
    if (top < 0)
    {
        std::cout << "Stack empty\n";
        return 0;
    }
    else
    {
        popVal = stackArray[top--];
        std::cout << popVal << " popped from stack\n";
        return popVal;
    }
}

template <class T>
bool Stack<T>::isEmpty()
{
    return top == -1;
}

int main()
{
    Stack<char> charStack(5);
    std::cout << "Stack is empty: " << charStack.isEmpty() << std::endl;
    charStack.push('a');
    charStack.push('b');
    std::cout << "Stack is empty: " << charStack.isEmpty() << std::endl;
    charStack.pop();
    charStack.pop();
    std::cout << "Stack is empty: " << charStack.isEmpty() << std::endl;
    
    return 0;
}
