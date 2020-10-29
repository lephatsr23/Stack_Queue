// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Stack.h"
#include "Node.h"
#include "Queue.h"

using namespace std;
int main()
{
    cout << "====Stack ====\n";
    Stack *stack = new Stack();
    stack->push(new Node(1));
    stack->PrintHead_tail();
    stack->push(new Node(2));
    stack->PrintHead_tail();
    stack->push(new Node(3));
    stack->PrintHead_tail();
    stack->push(new Node(4));
    stack->PrintHead_tail();
    stack->push(new Node(6));
    stack->PrintHead_tail();
    cout << "Size of stack " << stack->getsize() << endl;
    stack->printStack();
    cout << endl;
    cout << endl;
    Node* temp;
    temp = stack->pop();
    cout << "stack pop ";
    temp->printNode();
    cout << endl;
    stack->printStack();
    cout << endl;
    cout << endl;
    stack->push(new Node(5));
    stack->printStack();
    cout << endl;
    cout << endl;
    cout << "stack peak " << endl;
    temp->printNode();
    delete temp;
    delete stack;

    cout << "==== Queue ====\n";

    Queue* queue = new Queue();
    queue->enQueue(new Node(20));
    queue->PrintHead_tail();
    queue->enQueue(new Node(22));
    queue->PrintHead_tail();
    queue->enQueue(new Node(24));
    queue->PrintHead_tail();
    queue->enQueue(new Node(26));
    queue->PrintHead_tail();
    queue->enQueue(new Node(28));
    queue->PrintHead_tail();
    cout <<" size: "<< queue->getsize() << endl;
    queue->enQueue(new Node(29));
    queue->printQueue();
    cout << endl;
    cout << " head " << queue->head->data << " tail " << queue->tail->data << endl;
    cout << endl;
    cout << "queue dequeue " << endl;
    Node* temp2;
    temp2 = queue->deQueue();
    temp2->printNode();
    temp2 = queue->deQueue();
    temp2->printNode();
    temp2 = queue->deQueue();
    temp2->printNode();
    temp2 = queue->deQueue();
    temp2->printNode();
    cout << "queue list " << endl;
    queue->printQueue();
    cout << endl;
    queue->PrintHead_tail();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
