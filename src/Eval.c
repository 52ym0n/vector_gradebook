#include "Eval.h"


void eval_init(Eval_t* eval, int student_id, char date[], int evaluation)
{
	eval->student_id = student_id;
	strcpy_copy_string(eval->date, date, eval_date_len);
	eval->evaluation = evaluation;
}
