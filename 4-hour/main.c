#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - functions that executes certains programs base on user choice
 * Return 0 if everything is okay
*/
int main(void)
{
	char letter = 'A';

	system("clear");
	printf("A is a character with alphabet value: %c\n", letter);
	printf("A is a character with ANSI value: %d\n", letter);
	return (0);
}