#include "Stack.h"


void initStack(Stack* s) {
	s->list.head = nullptr;
}

void push(Stack* s, unsigned int element) {
	s->list.addToHead(element);
}

int pop(Stack* s) {
	if (isEmpty(s)) {
		return -1;
	}

	int value = s->list.head->data;
	s->list.removeFromHead();
	return value;
}

void cleanStack(Stack* s) {
	while (!isEmpty(s)) {
		pop(s);
	}
}

bool isEmpty(Stack* s) {
	return s->list.head == nullptr;  
}

bool isFull(Stack* s) {
	return false; // the stack has no limit
}