typedef struct s_Automobile s_Automobile;
/**
 * struct automobile - structure
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

void f_display_init_automobile();
void f_display_init_am_using_pointer();