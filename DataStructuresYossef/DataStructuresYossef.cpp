#include <iostream>
#include "Queue.h"
#include "LinkedList.h"  // Include the header file


int main() {
    Queue q;
    initQueue(&q, 3); // Initialize the queue with a capacity of 3

    enqueue(&q, 1);    // Add element 1
    enqueue(&q, 2);    // Add element 2
    enqueue(&q, 3);    // Add element 3

    return 0;
}
