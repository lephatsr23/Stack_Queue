#include "Queue.h"
Queue::Queue(int size) {
	this->size = size;
}
Queue::~Queue() {

}
int Queue::getsize() {
	return this->size;
}

void Queue::printQueue() {
	Node* temp;
	temp = this->head;
	while (temp) {
		temp->printNode();
		temp = temp->next;
	}
}

void Queue::eQueue(Node *node) {
	if (isFull() == 0)
	{
		if (isEmpty() == 1)
		{
			this->head = node;
			this->tail = node;
			this->id++;
		}
		this->tail->next = node;
		this->tail = node;
		this->id++;

	}
	else {
		cout << " full Queue, don't equeue" << endl;
		return;
	}

}

Node * Queue::deQueue() {
	Node* temp;
	temp = this->head;
	if (temp) {
		this->head = this->head->next;
		this->id--;
	}
	return temp;
}

Node* Queue::peak() {
	return this->head;
}

int Queue::isEmpty() {
	if (this->head == NULL || this->tail == NULL)
	{
		return 1;
	}
	return 0;
}
int Queue::isFull() {
	if (this->id > this->size)
	{
		return 1;
	}
	return 0;
}
