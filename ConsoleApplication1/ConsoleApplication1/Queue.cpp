#include "Queue.h"
Queue::Queue() {
	//this->size = size;
}
Queue::~Queue() {
	
	while (this->head) {
		Node* temp1;
		temp1 = this->head;
		this->head = this->head->next;
		delete temp1;
	}
	this->tail = NULL;
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

void Queue::enQueue(Node *node) {
	if (isFull(node) == 0)
	{
		if (isEmpty() == 1)
		{
			this->head = node;
			this->tail = node;
			this->size++;
			return;
		}
		else {
			this->tail->next = node;
			this->tail = node;
			this->size++;
			return;
		}
	}
	else {
		cout << " full Queue, don't equeue" << endl;
		return;
	}

}

Node * Queue::deQueue() {
	if (isEmpty() == 0 || this->size == 0) {
		return NULL;
	}
	Node* temp;
	temp = this->head;
	if (temp) {
		this->head = this->head->next;
		this->size--;
	}
	return temp;
}

Node* Queue::peak() {
	return this->head;
}

bool Queue::isEmpty() {
	if (this->head == NULL || this->tail == NULL)
	{
		return true;
	}
	return false;
}

bool Queue::isFull(Node *node) {
	node = new Node(node->data);

	if (!node)
	{
		return true;
	}
	return false;
}

void Queue::PrintHead_tail() {
	cout << " head " << this->head->data << " tail " << this->tail->data << endl;
}