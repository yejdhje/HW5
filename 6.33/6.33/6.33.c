#include <stdio.h>
#define SIZE 10

int binarySearch(const int b[], int searchKey, int low, int high);

int main() {
	int a[SIZE] = { 1, 4, 8, 90, 32, 10, 28, 75, 66, 42 };
	int key, result;

	printf("Enter an integer search key: ");
	scanf("%d", &key);

	result = binarySearch(a, key, 0, SIZE - 1);

	if (result != -1) {
		printf("The index is %d\n", result);
	}
	else {
		printf("not found\n");
	}

	return 0;
}

int binarySearch(const int b[], int searchKey, int low, int high) {
	if (low > high) {
		return -1; // base case: key not found
	}

	int middle = (low + high) / 2;

	if (searchKey == b[middle]) {
		return middle; // key found
	}
	else if (searchKey < b[middle]) {
		return binarySearch(b, searchKey, low, middle - 1); // search the left half
	}
	else {
		return binarySearch(b, searchKey, middle + 1, high); // search the right half
	}
}