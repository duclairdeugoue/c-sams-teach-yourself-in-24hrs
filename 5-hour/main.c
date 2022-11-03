#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - functions that executes certains programs base on user choice
 * Return 0 if everything is okay
*/
int main(void)
{
	system("clear");

	char c1, c2;

	printf("please enter two character: \n");
	c1 = getc(stdin);
	c2 = getchar();

	printf("The first charater you enter is: %c\n", c1);
	printf("The second charater you enter is: %c\n", c2);
	return (0);
}