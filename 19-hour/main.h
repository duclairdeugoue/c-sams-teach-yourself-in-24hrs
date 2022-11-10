typedef struct automobile automobile;



/**
 * struct automobile - structure
 * @year: first member
 * @model: second member
 * @engine_power: third member
 * @weight: fouth memeber
 * Description: Characterise an automobile
*/
struct automobile
{
	int year;
	char model[10];
	int engine_power;
	double weight;
} sedan = {1997, "New model", 200, 2345.67 };