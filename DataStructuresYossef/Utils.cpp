#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size) {
	Stack stack;
	initStack(&stack);

	for (unsigned int i = 0; i < size; i++) {
		push(&stack, nums[i]);
	}

	for (unsigned int i = 0; i < size; i++) {
		nums[i] = pop(&stack);
	}

	cleanStack(&stack);
}

int* reverse() {
	Stack stack;
	initStack(&stack);

	int* reversedArray = new int[10];

	std::cout << "Enter 10 positive integers:" << std::endl;
	for (int i = 0; i < 10; i++) {
		int number;
		std::cin >> number;
		push(&stack, number);  // דחיפה למחסנית
	}

	for (int i = 0; i < 10; i++) {
		reversedArray[i] = pop(&stack);
	}

	cleanStack(&stack);
    return reversedArray;
}