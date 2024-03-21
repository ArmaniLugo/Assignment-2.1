#include <iostream>
using namespace std;

int A[] = {2,4,6,8,10,12,15}; 

// recursive sum of a C-style array
// int A[] is a pointer to A, but I wrote it as int* A to be clear about ptr
int sum(int * A,const int size,int numValuesLeft) {
	int index = size - numValuesLeft;
	if (index == size-1) {
		// if index is illegal, stop!
		return A[index];// Base case: last index
	}
	else {// Recursive case
		int runningSum = A[index] + sum(A, size, numValuesLeft - 1);
		return runningSum;
	}
}

int main() {
	cout << "A[]'s sum is " << sum(A,7,7) << endl;
	return 0;
}