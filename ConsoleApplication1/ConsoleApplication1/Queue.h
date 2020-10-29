#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class Queue
{
public:
	int size;
	Node* head;
	Node* tail;
public:
	Queue();
	~Queue();
	int getsize();
	bool isEmpty();
	bool isFull(Node *node);
	void enQueue(Node* node);
	Node* deQueue();
	Node* peak();
	void printQueue();
	void PrintHead_tail();
};

