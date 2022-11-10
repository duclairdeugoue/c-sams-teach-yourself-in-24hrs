#include "stdio.h"
#include "stdlib.h"
#include "structures/main.h"
#include "functions/main.h"


/**
 * main - functions that executes certains programs base on user choice
 * Return: 0 if everything is okay
*/
int main(void)
{
	s_Automobile *ps_automobile = &gs_sedan;

	system("clear");

	// f_DisplayInitAutomobile();
	f_DisplayInitAmUsingPointer(ps_automobile);

	putchar('\n');
	return (0);
}
