#include <stdio.h>
#include "automobile.h"


/**
 * f_display_init_automobile - functions that display
 * the init values of automobile
 * Return: void if everything is okay
*/
void f_display_init_automobile()
{
	printf(
		"Displaying initial values of the structure\n"
		"Year: %d\n"
		"Model: %s\n"
		"Engine power: %d\n"
		"Weight: %.3lf\n",
		gs_sedan.m_year, gs_sedan.m_model, gs_sedan.m_engine_power, gs_sedan.m_weight
	);
}

void f_display_init_am_using_pointer(s_Automobile *ps_automobile)
{
	printf(
		"Displaying initial values of the structure using a pointer structure\n"
		"Year: %d\n"
		"Model: %s\n"
		"Engine power: %d\n"
		"Weight: %.3lf\n",
		ps_automobile->m_year, ps_automobile->m_model, ps_automobile->m_engine_power, ps_automobile->m_weight
	);

}