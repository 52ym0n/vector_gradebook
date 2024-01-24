#ifndef eval_h
#define eval_h

#define eval_date_len 11

typedef struct Eval
{
	int student_id;
	char date[eval_date_len];
	int evaluation;

}Eval_t;

void eval_init(Eval_t* eval, int student_id, char date[], int evaluation);

#endif