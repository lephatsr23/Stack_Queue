#include "Stack.h"
Stack::Stack(int size) {
	this->size = size;
}
Stack::~Stack() {

}
int Stack::getsize() {
	return this->size;
}
int Stack::isEmpty() {
	if (this->head == NULL)
	{
		return 1;
	}
	return 0;
}
int Stack::isFull() {
	if (this->id == this->size)
	{
		return 1;
	}
	return 0;
}
void Stack::push(Node * node) {
	
	if (isFull() == 0) {
		if (isEmpty() != 0 || this->tail == NULL) {
			this->tail = node;
		}
		node->next = this->head;
		this->head = node;
		this->id++;
	}
	else {
		//Node *pre_tail;
		//pre_tail = this->head;
		//while (pre_tail->next != this->tail) {
		//	pre_tail = pre_tail->next;
		//}
		//Node* temp;
		//temp = this->tail;
		//this->tail = pre_tail;
		//delete temp;
		//delete pre_tail;
		//node->next = this->head;
		//this->head = node;
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
	this->id--;
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