#include "Subject.h"

void subject_init(Subject_t* subject, int subject_id, char name[], int init_vector_size)
{
	subject->subject_id = subject_id;
	strcpy_s(subject->name, subject_name_len, name);
	vector_init(&subject->evaluations, init_vector_size);
}

void subject_add_evaluation(Subject_t* subject, int student_id, char date[], int new_evaluation)
{
	Eval_t* e_ptr = malloc(sizeof(Eval_t));
	if (e_ptr == NULL) return;

	eval_init(e_ptr, student_id, date, new_evaluation);

	vector_push_back(&subject->evaluations, e_ptr);
}


