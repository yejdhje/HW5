#include <stdio.h>
#include <stdlib.h>
int cubeByValue(int *nPtr);
int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);
	number = cubeByValue(&number);
	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

int cubeByValue(int *nPtr)
{
	return *nPtr * *nPtr * *nPtr;
}