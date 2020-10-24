#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class Stack
{
	public:
		int size;
		int id = 0;
		Node *head;
		Node *tail;
	public:
		Stack(int size);
		~Stack();
		int getsize();
		int isEmpty();
		int isFull();
		void push(Node *node);
		Node *pop();
		Node *peak();
		void printStack();
};

