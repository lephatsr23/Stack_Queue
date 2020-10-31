#include "Stack.h"
Stack::Stack() {
	//this->size = size;
}
Stack::~Stack() {

	while (this->head) {
		Node* temp1;
		temp1 = this->head;
		this->head = this->head->next;
		delete temp1;
	}
}
int Stack::getsize() {
	return this->size;
}
bool Stack::isEmpty() {
	if (this->head == NULL)
	{
		return true;
	}
	return false;
}
bool Stack::isFull(Node *node) {
	node = new Node(node->data);
	if (!node)
	{
		return true;
	}
	return false;
}
void Stack::push(Node * node) {
	
	if (isFull(node) == 0) {
		if (isEmpty() != 0 || this->tail == NULL) {
			this->tail = node;
		}
		node->next = this->head;
		this->head = node;
		this->size++;
	}
	else {
		cout << "Full members, don't push" << endl;
	}
}
Node* Stack::pop() {
	if (isEmpty() == 1)
	{
		return NULL;
	}
	Node* temp;
	temp = this->head;
	this->head = this->head->next;
	this->size--;
	temp->next = NULL;
	return temp;
}
Node* Stack::peak() {
	return this->head;
}
void Stack::printStack() {
	Node* temp;
	temp = this->head;
	while (temp) {
		temp->printNode();
		temp = temp->next;
	}
}

void Stack ::PrintHead_tail() {
	cout << " head " << this->head->data << " tail " << this->tail->data << endl;
}