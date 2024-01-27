#include "Eval.h"
#include "string.h"

void eval_init(Eval_t* eval, int student_id, char date[], int evaluation)
{
	eval->student_id = student_id;
	
	#ifdef VSC
	strcpy_s(eval->date, eval_date_len, date);
	#else
	strncpy(eval->date, date, eval_date_len);
	#endif // VSC
	eval->evaluation = evaluation;
}
