#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size) {
	q->array = new unsigned int[size];
	q->size = size;
	q->count = 0;
	q->front = 0;
	q->rear = 0;
}

void cleanQueue(Queue* q) {
    delete[] q->array;   // Free allocated array
    q->array = nullptr;  // Set pointer to null for safety
    q->size = 0;
    q->count = 0;
    q->front = 0;
    q->rear = 0;
}

void enqueue(Queue* q, unsigned int newValue) {
    if (isFull(q)) {
        std::cout << "Queue is full. Cannot enqueue." << std::endl;
        return;
    }

    q->array[q->rear] = newValue;
    q->rear = (q->rear + 1) % q->size;
    q->count++;
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        std::cout << "Queue is empty. Cannot dequeue." << std::endl;
        return -1;                          
    }
    int value = q->array[q->front];
    q->front = (q->front + 1) % q->size;
    q->count--;
    return value;
}

bool isEmpty(Queue* s) {
    return s->count == 0;
}

bool isFull(Queue* s) {
    return s->count == s->size;
}