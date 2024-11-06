#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

struct Node {
	int data;
	Node* next;

	Node(int value) {
		data = value;
		next = nullptr;
	}
};

struct LinkedList {
	Node* head;

	LinkedList() {
		head = nullptr;
	}

	void addToHead(int value);

	void removeFromHead();

	
};


#endif