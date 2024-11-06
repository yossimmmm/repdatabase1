#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

typedef struct LinkedList
{
	int size = 10; // default size
	int* PosNum = new int[size];


} LinkedList;

void AddNum(int* PosNum, int value);
void RemoveNum(int* PosNum);


#endif