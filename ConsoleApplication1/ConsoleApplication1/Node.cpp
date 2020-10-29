#include "Node.h"

Node::Node(int data) {
	this->data = data;
}
Node::~Node() {

}
void Node::printNode() {
	cout << this->data;
	cout << endl;
}