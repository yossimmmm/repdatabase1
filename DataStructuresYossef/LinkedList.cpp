#include "LinkedList.h"

void AddNum(int* PosNum, int size, int value) {
	for (int i = 0; i < size; i++) {
		if (PosNum[i] = 0) {
			PosNum[i] = value;
			return;
		}
	}
	std::cerr << "Array is full. Cannot add number." << std::endl;
}
void RemoveNum(int* PosNum, int size) {
	for (int i = 0; i < size; i++) {
		if (PosNum[i])
	}
}
