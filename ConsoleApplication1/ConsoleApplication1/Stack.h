#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class Stack
{
	public:
		int size;
		Node *head;
		Node *tail;
	public:
		Stack();
		~Stack();
		int getsize();
		bool isEmpty();
		bool isFull(Node * node);
		void push(Node *node);
		Node *pop();
		Node *peak();
		void printStack();
		void PrintHead_tail();
};

