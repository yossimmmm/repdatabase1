#include "LinkedList.h"

void LinkedList::addToHead(int value) {
	Node* newNode = new Node(value);
	newNode->next = head;
	head = newNode;
}

void LinkedList::removeFromHead() {
	if (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	else {
		std::cout << "The list is already empty." << std::endl;
	}
}