typedef struct s_Automobile s_Automobile;


/**
 * struct s_Automobile - structure
 * @m_year: first member
 * @m_model: second member
 * @m_engine_power: third member
 * @m_weight: fouth memeber
 * Description: Characterise an automobile
*/
struct s_Automobile
{
	int m_year;
	char m_model[10];
	int m_engine_power;
	double m_weight;
} gs_sedan = {1997, "New model", 200, 2345.67 };

/* Function definitions*/

void f_DisplayInitAutomobile(void);
void f_DisplayInitAmUsingPointer(s_Automobile *ps_automobile);

/**
 * f_DisplayInitAutomobile - functions that display
 * the init values of automobile by making a copy
 *
 * Return: void if everything is okay
*/
void f_DisplayInitAutomobile(void)
{
	printf(
		"Displaying initial values of the structure\n"
		"Year: %d\n"
		"Model: %s\n"
		"Engine power: %d\n"
		"Weight: %.3lf\n",
		gs_sedan.m_year,
		gs_sedan.m_model,
		gs_sedan.m_engine_power,
		gs_sedan.m_weight
	);
}


/**
 * f_DisplayInitAmUsingPointer - functions that display
 * the init values of automobile by accessing directly
 *
 * Return: void if everything is okay
*/
void f_DisplayInitAmUsingPointer(s_Automobile *ps_automobile)
{
	printf(
		"Displaying initial values of the structure using a pointer structure\n"
		"Year: %d\n"
		"Model: %s\n"
		"Engine power: %d\n"
		"Weight: %.3lf\n",
		ps_automobile->m_year,
		ps_automobile->m_model,
		ps_automobile->m_engine_power,
		ps_automobile->m_weight
	);

}
