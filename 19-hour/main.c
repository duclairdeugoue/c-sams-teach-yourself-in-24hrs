#include "stdio.h"
#include "stdlib.h"
#include "automobile.c"


/**
 * main - functions that executes certains programs base on user choice
 * Return: 0 if everything is okay
*/
int main(void)
{
	s_Automobile *ps_automobile = &gs_sedan;

	system("clear");

	// f_display_init_automobile();
	f_display_init_am_using_pointer(ps_automobile);

	putchar('\n');
	return (0);
}
