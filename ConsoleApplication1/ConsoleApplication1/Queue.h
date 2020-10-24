#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class Queue
{
public:
	int size;
	int id = 0;
	Node* head;
	Node* tail;
public:
	Queue(int size);
	~Queue();
	int getsize();
	int isEmpty();
	int isFull();
	void eQueue(Node* node);
	Node* deQueue();
	Node* peak();
	void printQueue();
};

