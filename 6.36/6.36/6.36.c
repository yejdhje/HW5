#include<stdio.h>
#include<stdlib.h>
void stringReverse(char *sPtr) 
{
	if (*sPtr == '\0') return;
	stringReverse(sPtr + 1);
	printf("%c", *sPtr);
}

int main()
{
	char s[1000];
	scanf("%s", s);
	stringReverse(s);
	printf("\n");
	system("pause");
	return 0;
}